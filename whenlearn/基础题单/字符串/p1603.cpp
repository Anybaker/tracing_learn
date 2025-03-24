#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
string word[30]= {"one","two","three","four","five","six","seven",
"eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen",
"sixteen","seventeen","eighteen","nineteen","twenty","a","both"
"another","first","second","third"};
int num[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
,1,2,1,1,2,3};
vector<int> res;
//英文对应数字
int main(){
    string use;
    while(cin>>use){
        if(use==".") break;
        int i;
        for(i=0;i<26;i++)
            if(use==word[i]){
                res.push_back(num[i]);
                break;
            }
        
    }

    if(res.empty()){
        cout << 0;
        return 0;
    }
    for(int i=0,size=res.size();i<size;i++)
        res[i] = res[i]*res[i]%100;

    sort(res.begin(),res.end());
    int point = 1;
    for(auto item:res){
        if(item<10&&point) cout << item,point--;
        else if(item<10&&!point) cout << 0 << item;
        else cout << item;
    }
}