#include <cstdio>


int use = 364;
int n,cnt;
//std::vector<std::pair<int,int>> res;
int main()
{

    scanf("%d",&n);
    int need = n/364;

    for(int x=100;x>0;x--)
    {
        for(int k =1;k<x;k++)
        {
            if(x+3*k==need) {printf("%d\n%d",x,k);cnt++;}//res.push_back({x,k}); 
        }
        //if(!res.empty()) break;
        if(cnt) break;
     }

    //printf("%d\n%d",res.front().first,res.front().second);
}