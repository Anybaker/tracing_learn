#include <iostream>
#include <math.h>
using  namespace std;

int n;
int main()
{
    cin >> n;
    int a[n][1],b[n][1],c[n][1];
    for(int i=0;i<n;i++)
    {
        cin >> a[i][0] >> b[i][0] >> c[i][0];
    }

    int cnt=0,u,us,use,usee,useee;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            u = abs(a[i][0]-a[j][0]);
            us = abs(b[i][0]-b[j][0]);
            use = abs(c[i][0]-c[j][0]);
            usee = a[i][0]+b[i][0]+c[i][0];
            useee = a[j][0]+b[j][0]+c[j][0];
            //cout << u << us << use << endl;
            if(u<=5 && us<=5 && use<=5 && abs(usee-useee)<=10) cnt++;
        }
    }

    cout << cnt;
}