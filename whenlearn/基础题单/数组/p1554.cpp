#include <iostream>
using namespace std;

int main()
{
    int M,N;
    cin >> M >> N;
    int hash[10]={0};
    int tmp;
    for(int i=M;i<=N;i++)
    {
        tmp = i;
        while(tmp)
        {
            hash[tmp%10]++;
            tmp/=10;
        }
    }
    for(int i=0;i<10;i++) cout << hash[i] << " ";
}