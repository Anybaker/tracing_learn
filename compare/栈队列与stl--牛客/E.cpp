#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    string a;
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
        if(i==0 && a[i] == 'b')
        {
            cout << "Bad";
            return 0;
        }
        if(a[i] == 'a') dq.push_back(1);
        if(a[i] == 'b')
        {
            if(dq.size() != 0) dq.pop_back();
            else{
                cout << "Bad";
                return 0;
            }
        }
        
    }

    if(dq.size() == 0)  cout << "Good";
    else cout << "Bad";

    return 0;
}