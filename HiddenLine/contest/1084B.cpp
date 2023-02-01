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
    


    int n;
    ll s;
    cin >> n >> s;

    vector <ll> v;
    ll a, total = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
        total += a;
    }

    if(total < s)
        return cout << -1 << endl, 0;

    dst(v);
    ll tmp = v[n-1], x, sum = 0;

    for(int i = 0; i < n; i++)
    {
        s -= (v[i] - tmp);
    }

    int b = 0;
    if(s>0)
        b = s/n + (s%n != 0);
    pfl(tmp-b);
    nl;

    return 0;

}

//-----------------------------------***********************----------------------------------------------//