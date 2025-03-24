#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int res1=1,res2=1;
    for(int i=0,size=a.size();i<size;i++){
        res1 *= a[i]-'A'+1;
    }
    for(int i=0,size=b.size();i<size;i++){
        res2 *= b[i]-'A'+1;
    }
    res1%=47;res2%=47;
    if(res1==res2) cout << "GO";
    else cout << "STAY";
    
}