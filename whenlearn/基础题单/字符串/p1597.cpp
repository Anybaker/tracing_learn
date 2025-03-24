#include <iostream>
#include <string>
using namespace std;

int a,b,c;
int main(){
    string inp;
    cin >> inp;
    for(int i=0,size=inp.size();i<size;i+=5){
        if(inp[i]=='a'){
            if(inp[i+3]>'0'&&inp[i+3]<'9')
                a = inp[i+3]-'0';
            else if(inp[i+3]=='a') a=a;
            else if(inp[i+3]=='b') a=b;
            else a=c;
        }
        if(inp[i]=='b'){
            if(inp[i+3]>'0'&&inp[i+3]<'9')
                b = inp[i+3]-'0';
            else if(inp[i+3]=='a') b=a;
            else if(inp[i+3]=='b') b=b;
            else b=c;
        }
        if(inp[i]=='c'){
            if(inp[i+3]>'0'&&inp[i+3]<'9')
                c = inp[i+3]-'0';
            else if(inp[i+3]=='a') c=a;
            else if(inp[i+3]=='b') c=b;
            else c=c;
        }
    }
    cout << a << " " << b << " " << c;
}