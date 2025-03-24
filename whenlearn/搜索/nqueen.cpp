#include <iostream>
using namespace std;

const int N = 100;
int n;
bool col[N],dg[N],udg[N];
char g[N][N];

void dfs(int u){
    if(u==n+1){
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
                printf("%c ",g[i][j]);
        puts("");
        }
        return;
    }

    for(int i=1;i<=n;i++){
        if(!col[i]&&!dg[i+u]&&!udg[n+i-u]){
            //cout << u << " ";
            g[u][i]='q';
            col[i]=dg[i+u]=udg[n-u+i]=true;
            dfs(u+1);
            col[i]=dg[i+u]=udg[n-u+i]=false;
            g[u][i] = 'o';
        }
        
    }

}

int main(){
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            g[i][j] = 'o';
        g[i][n+1]='\0';
    }


    dfs(1);

    return 0;
}