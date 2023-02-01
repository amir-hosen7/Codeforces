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
#define pp                  pair<ll,ll>
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
    int test = 1;
    while(test--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector <int> l(n);
        vector <int> r(n);

        int cnt = 0, mx = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'G')
            {
                mx++;
                cnt++;
                l[i] = cnt;
            }
            else cnt = 0;
        }

        cnt = 0;
        for(int i = n-1; i >= 0; i--)
        {
            if(s[i] == 'G')
            {
                cnt++;
                r[i] = cnt;
            }
            else cnt = 0;
        }

        int res = 0, newr;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'G') continue;
            newr = 1;
            if(i > 0) newr += l[i-1];
            if(i < n-1) newr += r[i+1];
            res = max(newr, res);
        }

        res = min(res, mx);
        if(mx == n) res = n;
        cout << res << endl;

    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//