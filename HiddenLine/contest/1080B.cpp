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
    int t = 1;
    while(t--)
    {
        int n;
        sf(n);

        ll l, r, total_sum, lower_sum, total_odd, lower_odd, total_even, sum;
        for(int i = 0; i < n; i++)
        {
            sffl(l, r);

            total_sum = (r*(r+1))/2;
            lower_sum = (l*(l+1))/2 - l;
            sum = total_sum - lower_sum;

            if(r%2 != 0)
                total_odd = (r/2+1) * (r/2+1);
            else total_odd = (r/2) * (r/2);

            if(l%2 == 0)
                lower_odd = ((l-1)/2+1) * ((l-1)/2+1);
            else lower_odd = (l-1)/2 * (l-1)/2;

            total_odd -= lower_odd;
            total_even = sum - total_odd;

            pf(total_even - total_odd);
            nl;
        }
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//