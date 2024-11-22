#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int mid = 3;
    for(int i=1;i<=5;i++)// i Hang
    {
        int distance = abs(mid-i);
        for(int j=1;j<=5;j++)//j lie
        {
            // 3-1 = 2; 4 space
            // 3-2 = 1; 2 space
            if(j<=distance or (n-j+1)<=distance){cout << " ";}
            else cout << "*";
        }
        cout << "\n";
    }
}