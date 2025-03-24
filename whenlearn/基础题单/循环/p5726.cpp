#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int n; float sum;
vector<int> scores;
int main()
{
    scanf("%d",&n);
    int input;
    while(n--)
    {
        scanf("%d",&input);
        scores.push_back(input);
    }
    sort(scores.begin(),scores.end());
    scores.pop_back();
    for(auto x: scores)
    {
        sum+=x;
    }
    sum-=scores.front();
    float size = scores.size()-1;
    printf("%.2f",sum/size);
}