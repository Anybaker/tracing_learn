#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

const int N = 1000;
typedef pair<int,int> PII;
//所有边权都是1的时候使用bfs
int n,m;
int g[N][N];
int d[N][N];
queue<PII> q;
int bfs(){
    memset(d,-1,sizeof(d));
    d[0][0] = 0;

    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};//用这个探索坐标
    while(!q.empty()){
        auto top = q.front();//每次取出队头

        for(int i=0;i<4;i++){
            int x = top.first+dx[i],y=top.second+dy[i];
            if(x>=0&&x<n&&y>=0&&y<m&&g[x][y]==0&&d[x][y]==-1){
                d[x][y] = d[top.first][top.second]+1;//记录走到这里的步数
                q.push({x,y});
            }
        }
    }

    return d[n-1][m-1];
}
int main(){
    cin >> n >> m;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> g[i][j];

    cout << bfs() << endl;

    return 0;

}