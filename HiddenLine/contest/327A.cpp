/**Bismillahir Rahmanir Rahim.**/
#include <bits/stdc++.h>
#define mem(a, v)           memset(a, v, sizeof a)
#define ast(v)              sort(v.begin(),v.end())
#define dst(v)              sort(v.begin(),v.end(), greater <int> ())
#define ass(tmp, v)         tmp.assign(v.begin(), v.end())
#define rep(i, l, r)        for (int i = (l); i <= (r); ++i)
#define sf(n)               scanf("%d", &n)
#define sff(n, m)           scanf("%d %d",&n,&m)
#define sfl(n)              scanf("%lld", &n)
#define sfu(n)              scanf("%llu", &n)
#define sffl(n, m)          scanf("%lld %lld",&n,&m)

#define pf(n)               printf("%d", n)
#define sp                  printf(" ")
#define nl                  printf("\n")
#define prln(n)             printf("%d\n", n)
#define pfl(n)              printf("%lld", n)
#define pfu(n)              printf("%llu", n)
#define pb                  push_back
#define pp                   pair<ll,ll>
#define mp                  make_pair
#define mod                 1e9+7
#define mxx                 1e9
#define mii                 -1e9
#define T                   true
#define F                   false
#define S                   second
#define f                   first
#define PI                  3.1415926

//-----------------------------------***********************----------------------------------------------//

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 100002;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test = 1;
    while(test--)
    {
        int n;
        sf(n);

        vector <int> v;
        int a;

        for(int i = 0; i < n; i++)
        {
            sf(a);
            v.pb(a);
        }

        int zero, one, x = 0, y = 0, d, mx = -N;
        for(int i = 0; i < n; i++)
        {
            zero = 0, one = 0;
            for(int j = i; j < n; j++)
            {
                if(v[j] == 0) zero++;
                else one++;
                d = zero - one;
                if(mx < d)
                {
                    mx = d;
                    x = i;
                    y = j;
                }
            }
        }
        //cout << mx << endl;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(i >= x and i <= y)
            {
                if(v[i] == 0) ans++;
            }
            else
            {
                if(v[i] == 1) ans++;
            }
        }
        prln(ans);

    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//