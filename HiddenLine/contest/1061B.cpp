/**Bismillahir Rahmanir Rahim.**/
#include <bits/stdc++.h>
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

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int t = 1;
    while(t--)
    {
        ll n, m;
        sffl(n, m);

        vector <int> v;
        ll a, mx = 0, total = 0;
        for(int i = 0; i < n; i++)
        {
            sfl(a);
            v.pb(a);
            total += a-1;
        }

        ast(v);
        for(int i = 0; i < n; i++)
        {
            if(v[i] > mx)
                mx++;
        }

        if(mx < v[n-1]) total -= (v[n-1] - mx);
        pfl(total);
        nl;
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//