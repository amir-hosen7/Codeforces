/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**                Amantu Amir - Hacker               **/
/**  Department of Computer Science and Engineering  **/
/**            University  of Barisal               **/
/**                   Bangladesh                         **/
/******************************************************/
/******************************************************/
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>
#define nl printf("\n");
#define N 200100
#define pp pair<ll, ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define prln(n) printf("%d\n",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

vector <int> v[N];
void bfs(int source);
int level[N];


int main()
{
    int n, m;
    sff(n, m);

    for(int i = 1; i <= 10000; i++)
    {
        v[i].pb(i * 2);
        v[i].pb(i - 1);
    }

    bfs(n);
    prln(level[m]);

    return 0;
}


void bfs(int source)
{
    int visited[N];
    memset(visited, 0, sizeof(visited));
    visited[source] = 1;

    queue <int> q;
    q.push(source);
    level[source] = 0;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int i = 0; i < v[parent].size(); i++)
        {
            int child = v[parent][i];

            if(visited[child] == 0)
            {
                visited[child] = 1;
                q.push(child);
                level[child] = level[parent] + 1;
            }
        }
    }
}


/*****************  ALHAMDULILLAH  *****************/