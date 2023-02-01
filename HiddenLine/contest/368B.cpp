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
const int N = 100050;

bool des(pair<string,ll> a, pair<string, ll> b)
{
    if(a.second!= b.second) return a.second > b.second;    /// kom theke beshi sort ///return p.first > q.first; /// beshi theke kom sort
    else return a.first < b.first;
}


int ar[N];
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int test = 1;
    while(test--)
    {
        //freopen("output.txt", "w", stdout);
        int n, m;
        cin >> n >> m;
        int tmp = n;
        vector <int> v, v2;

        int a, cnt = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a;
            v.pb(a);
        }

        reverse(v.begin(), v.end());
        int ans[N];
        for(int i = 0; i < n; i++)
        {
            ar[v[i]]++;
            if(ar[v[i]] == 1)
            {
                cnt++;
                ans[tmp--] = cnt;
            }
            else ans[tmp--] = cnt;
        }
        int b;
        for(int i = 1; i <= m; i++)
        {
            cin >> b;
            cout << ans[b];
            if(i != m) cout << endl;
        }
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//