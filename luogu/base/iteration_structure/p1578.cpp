#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int minn = 12345,a;
    while(cin >> a)
    {
        minn = min(minn,a);
        char b = cin.get(); 
        if(b == '\n') break;
    }

    cout << minn;
}
