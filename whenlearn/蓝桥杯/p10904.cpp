#include <iostream>
#include <algorithm>

/*
    n个矿洞坐标
    从0出发
    每次向左/右走一步 一共走m步
    一个矿洞获得一个矿石
    最多获得多少单位的矿石
    你可以往回走，但是往回走的代价要小于往前走的代价
    总之 当下的最优选择就是以最小的步数得到矿石
    也就是从当前位置向左向右最短的步数
    我们假定在一个位置，计算出最近的一点，然后前往
    此时讲sta标记为0 已采集
    然后再次重复此步骤即可
    但其实当前步骤受后一步骤影响
    如果当前选择了某个步骤，但是其中一个步骤的后续状态可以花费更少的步骤
    得到矿石 那么就应该选择那个后续总的需要的步数最小的
    所以在当前步骤贪心之后，我们仍需要计算另一个选择下的下一步选择
    由这两步选择的sum我们选择舍弃哪一个
    但实际上我们只会拐一次弯 因为拐弯意味着反方向有更好的解
    那为什么不一开始就直接反方向呢
*/

int n,m;

int main(){
    std::cin >> n >> m;
    int sum[n+1]={0};
    int point[n];
    int status[n] = {0};
    for(int i=0;i<n;i++) std::cin>>point[i];

    std::sort(point,point+n);
    for(int i=0;i<n;i++) std::cout<<point[i]<<" ";
    std::cout << std::endl;
    int pivot;
    for(int i=1;i<=n;i++){
        if(point[i]==0&&i!=n){
            pivot = i+1,sum[i+1]=0;
            continue;
        } 
        sum[i] = sum[i-1] + point[i-1];
        
    }

    for(int i=1;i<=n;i++) std::cout << sum[i] << " ";
        
    



    
    //for(auto item:point) std::cout << item << ' ';
    //std::cout << *(--point.find(0));//upperbound找到第一个大于他的元素
    
    
}