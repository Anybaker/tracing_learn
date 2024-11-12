#include <iostream>
using namespace std;

int main()
{
    int s,n;int to_walk;int hour,minu;
    int must = 10;
    cin >> s >> n;
    to_walk = s/n +1;
    int total = must + to_walk;
    if(total > 8*60)
    {
        int _total = total - 8*60;
        hour = 24 - (_total/60);minu = 60 -(total%60);
        if(minu != 60){hour--;}
    }
    else{
        hour = 8 - (total/60);minu = 60 - (total%60);
        if(minu != 60){hour--;}
    }

    if(hour < 10) {
        if(minu>10)cout << "0" << hour <<":"<<minu;
        else cout << "0" << hour <<":0"<<minu;}
    else {
        if(minu>10)cout << hour << ":" << minu;
        else cout << hour << ":0" << minu;}
}