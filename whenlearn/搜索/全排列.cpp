#include <iostream>
using namespace std;

const int N = 10;

int path[N];
bool status[N];
int n;

void dfs(int u){
    if(u==n+1){
        for(int i=1;i<=n;i++)
            printf("%d ",path[i]);
        puts("");
        return;
    }
        

    for(int i=1;i<=n;i++){
        if(!status[i]){
            
            path[u] = i;
            status[i] = true;
            dfs(u+1);
            //path[u] = 0;
            status[i] = false;
        }
    }
}

int main(){
    cin >> n;

    dfs(1);

    return 0;
}