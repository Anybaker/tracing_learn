#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int cnt[30];
int main(){
    int n=4;
    string use;
    while(n--){
        getline(cin,use);
        //cout << "读取到的行: " << use << endl; // 调试输出
        for(int i=0,size=use.size();i<size;i++){
            if(use[i]==' ') continue;
            else if(use[i]>='A'&&use[i]<='Z') cnt[use[i]-'A']++;
        }
    }

    int maxx = -1;
    for(int i=0;i<26;i++){
        maxx = max(maxx,cnt[i]);
    }

    for(int i=0;i<maxx;i++){
        for(int j=0;j<26;j++){
            if(cnt[j]+i>=maxx) cout << "*" <<" ";
            else cout << "  ";
        }
        cout << endl;
    }//一共要输出maxx行 


    for(int i=0;i<26;i++)
        printf("%c ",'A'+i);

    return 0;

}