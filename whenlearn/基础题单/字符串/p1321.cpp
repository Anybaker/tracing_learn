#include <string>
#include <iostream>
using namespace std;

int main(){
    string st;
    cin >> st;
    int boy=0,girl=0;
    for(int i=0;st[i]!='\0';i++){
        if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')
			boy++; 
		if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')
            girl++;
        }

    cout << boy << endl << girl << endl;
    }
