#include <iostream>
#include <cmath>
using namespace std;

double s,sum,a=2;int res;
int main()
{
	cin >> s;
	while(sum < s)
	{
		//cout << "a:"<< a << endl;
		//cout << 1;
		res++;
		sum+=a;
		a*=0.98;
		
	}
	cout <<  res;
}
