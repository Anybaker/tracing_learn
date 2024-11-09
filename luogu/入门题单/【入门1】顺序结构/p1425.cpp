#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b){
        if((60-b)+d<60)cout << c-a-1 << " " << (60-b)+d;
        else{cout << c-a << " " << d-b;}}
    else cout << c-a << " " << b+d;
}