#include <iostream>
#include <string>
#include <vector>
using namespace std;

void popandout(vector<char> num)
{
    while(!num.empty()&&num.back()=='0') num.pop_back();
    if(num.empty()){
        cout << "0";
        return;
    }//逆天 会全是0啊？0.3
    for(int i=num.size()-1;i>=0;i--) cout << num[i];
}

void popandoutForDot2(vector<char> num)
{
    if (num.empty()) {
        cout << "0";
        return;
    }
    int j=0;
    while(j<num.size()&&num[j]=='0') j++;//确实要检查越界
    if(j==num.size()){
        cout << "0";
        return;
    }//珍妮天啊
    for(int i=num.size()-1;i>=j;i--) cout << num[i];
}

vector<char> num;
int main()
{
    string in;
    cin >> in;
    char sig='\0';int pos=0;
    
    for(int i=0;in[i]!='\0';i++){
        num.push_back(in[i]);//复制到向量里 方便操作
        if(in[i]=='.'||in[i]=='/'){
            sig = in[i];
            pos = i;
        }
        if(in[i]=='%'){
            sig = '%';
            pos = i;
        }//完成符号的识别
    }
    
    if(!pos){
        popandout(num);
    }//没有什么特殊的 直接处理就好了
    else if(sig=='.'){
        //vector<char> first,second;
        /*for(int i=0;i<pos;i++) first.push_back(num[i]);
        for(int i=pos+1;i<num.size();i++) second.push_back(num[i]);*/
        vector<char> first(num.begin(), num.begin() + pos);
        vector<char> second(num.begin() + pos + 1, num.end());
        popandout(first);
        cout << sig;
        popandoutForDot2(second);
    }
    else if(sig=='/'){
        //vector<char> first,second;
        vector<char> first(num.begin(), num.begin() + pos);
        vector<char> second(num.begin() + pos + 1, num.end());
        /*for(int i=0;i<pos;i++) first.push_back(num[i]);
        for(int i=pos+1;i<num.size();i++) second.push_back(num[i]);*/
        popandout(first);
        cout << sig;
        popandout(second);    
    }
    else{
        num.pop_back();
        popandout(num);
        cout << "%";
    }
    

        
}