#include <iostream>

using namespace std;

const int N = 1e5+10;

int son[N][26],cnt[N],idx;

void insert(char s[])
{
    int p = 0;
    for(int i=0;s[i]!='\0';i++)
    {
        int u = s[i] - 'a';
        if(!son[p][u]) son[p][u] = ++idx;
        p = son[p][u];
    }

    cnt[p]++;
}

int query(char s[])
{
    int p = 0;
    for(int i=0;s[i] != '\0';i++)
    {
        int u = s[i]-'a';
        if(!son[p][u]) return 0;
        p = son[p][u];
    }

    return cnt[p];
}