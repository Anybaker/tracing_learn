#include <iostream>
#include <string>
using namespace std;

int n;
string use;
string maxx;
int which = 1;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> use;
        if(i==0){
            maxx = use;
            continue;
        }

        int s1 = use.size();
        int s2 = maxx.size();

        if(s1>s2) maxx = use,which=i+1;
        else if(s1<s2) continue;
        else{
            for(int j=0;j<s1;j++){
                if(use[j]>maxx[j]){
                    maxx = use;
                    which = i+1;
                    continue;
                }
            }
        }
    }
    cout << which << endl << maxx;

    return 0;
}