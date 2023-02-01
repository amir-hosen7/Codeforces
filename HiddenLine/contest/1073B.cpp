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
#define nl printf("\n")
#define pp pair<ll,ll>
#define mem(a, s) memset(a, s, sizeof a)
#define ast(v) sort(v.begin(),v.end())
#define dst(v) sort(v.begin(),v.end(), greater <int> ())
#define vas(tmp, v) tmp.assign(v.begin(), v.end())
#define rep(i, l, r) for (int i = (l); i < (r); ++i)
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)

#define pf(n) printf("%d", n)
#define sp printf(" ")
#define pfl(n) printf("%lld", n)
#define pfu(n) printf("%llu", n)
#define pb push_back
#define PI 3.1415926

//-----------------------------------***********************----------------------------------------------//



typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 1000002;

queue <int> q;
int main()
{
    int t = 1;
    while(t--)
    {
        int n;
        sf(n);

        int a[n+1], x;
        for(int i = 0; i < n; i++)
        {
            sf(x);
            q.push(x);
            a[x] = 0;
        }

        int cnt, b, temp;
        for(int i = 0; i < n; i++)
        {
            sf(b);
            cnt = 0;

            if(!a[b])
            {
                while(!q.empty())
                {
                    temp = q.front();
                    if(temp == b)
                    {
                        cnt++;
                        a[b] = 1;
                        q.pop();
                        break;
                    }

                    cnt++;
                    a[temp] = 1;
                    q.pop();
                }
            }

            pf(cnt);
            sp;
        }
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//