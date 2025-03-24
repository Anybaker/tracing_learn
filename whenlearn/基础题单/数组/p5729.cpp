#include <iostream>
#include <algorithm>
using namespace std;

int use[25][25][25];
int w,x,h,a,b,c,d,e,f,q,res;
int main()
{
    cin >> w >> x >> h;
    cin >> q;
    while(q--)
    {
        cin >> a >> b >> c >> d >> e >> f;
        for(int i=a;i<=d;i++)
        {
            for(int j=b;j<=e;j++)
            {
                for(int k=c;k<=f;k++)
                {
                    use[i][j][k]=1;
                }
            }
        }
    }
    for(int i=1;i<=w;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=h;k++)
            {
                if(!use[i][j][k]) res++;
            }
        }
    }

    cout << res;
}
