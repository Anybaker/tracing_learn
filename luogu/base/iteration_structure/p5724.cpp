#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
int maxx=-1,minn=1e3+10;

int main(){
	cin >> n;int a;
	while(n--)
	{
		cin >> a;
		maxx = max(maxx,a);
		minn = min(minn,a);
		//cout << "max:" << maxx << "min:" << minn << endl;
	}
	
	cout << maxx-minn;
}
