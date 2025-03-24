#include <iostream>

using namespace std;

int n,res;

int main()
{
	cin >> n;
	int arr[n][n+1];
	res = sizeof(arr)/8;
	cout << res;
}
