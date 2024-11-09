#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a[1000];
    cout << "plz type in several numbers seperated by backspace,pause by Enter";
    int index=0,count=1;
    int tmp;
    while(cin >> a[index++]){
        if(cin.get()=='\n') {break;}
        else {count+=1;}
    }
    //input is over
    int p=0,q=1;
    int maxx=0,pre=0;
    int record=0;
    while(q<count)
    {
        if(a[p]==a[q])
        {
            pre = maxx;//to store last 'max_times'
            q++;
            maxx = max(maxx,q-p);//use max to store 'max_times',then use maxx to update record
            if(maxx>pre) record = p;//if current is longer,then update record
        }
        else {p=q;q++;}
    }

    if(maxx==0) cout<<"is 1";
    else        cout<<a[record]<<" appear "<< maxx <<" times";

    //cannot deal with 2 numbers with the same 'max_times'
    
}