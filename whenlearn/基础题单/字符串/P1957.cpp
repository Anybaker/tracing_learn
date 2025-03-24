#include <string>
#include <iostream>
#include <ctype.h>
#include <cstring>
using namespace std;
int i;
char ope;string use;
int x,y,res;


int get(int x)
{
    int cnt = 0;
    if(x==0) return 1;
    int record = x;
    x = abs(x);
    while(x>0){
        cnt++;
        x/=10;
    }
    if(record<0) return cnt+1;
    else return cnt;
}

void out(int x,int y,int res,char op)
{
    printf("%d%c%d=%d\n",x,op,y,res);
    int size = get(x)+get(y)+get(res)+2;
    printf("%d\n",size);
}

int main()
{
    scanf("%d",&i);
    while(i--){
        cin >> use;
        if(use[0]>='a'&&use[0]<='z'){
            ope = use[0];//记录下来当前操作符
            cin >> x >> y;
            if(ope=='a'){
                res =x+y;
                out(x,y,res,'+');
            }
            else if(ope=='b'){
                res =x-y;
                out(x,y,res,'-');
            }
            else{
                res =x*y;
                out(x,y,res,'*');
            }

            use.clear();
            x=y=res=0;
        
        }
        else{
            for(int i=0,len=use.size();i<len;i++){
                x = x*10+use[i]-'0';
            }
            cin >> y;
            if(ope=='a'){
                res =x+y;
                out(x,y,res,'+');
            }
            else if(ope=='b'){
                res =x-y;
                out(x,y,res,'-');
            }
            else{
                res =x*y;
                out(x,y,res,'*');
            }
            
            x=y=res=0;

        }
    }
}