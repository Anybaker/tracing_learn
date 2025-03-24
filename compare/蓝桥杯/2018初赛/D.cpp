#include<cstdio>
#include <queue>
#include <set>

int main()
{
    int target =  49;
    std::queue<int> q;
    std::set<int> s;
    q.push(3);
    q.push(5);
    q.push(7);
    s.insert(3);
    s.insert(5);
    s.insert(7);

    int cnt = 0;
    while(1)
    {
        int num = q.front();
        q.pop();

        if(num == target)
        {
            printf("%d",cnt+1);
            return 0;
        }

        for(auto fac:{3,5,7})
        {
            int newn = num*fac;
            if(s.find(newn)==s.end())
            {
                q.push(newn);
                s.insert(newn);
            }
        }

        cnt ++;
    }
}