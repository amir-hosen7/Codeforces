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
const int N = 100002;

int main()
{
    int t = 1;
    while(t--)
    {
        ll n;
        sfl(n);

        ll sum = 1, temp = 0, ans = 1;
        while(1)
        {
            sum = sum * 2;

            if(sum > n)
            {
                temp = sum/2;
                n -= temp;

                if(n == 0) break;
                if(n == 1)
                {
                    ans++;
                    break;
                }

                sum = 1;
                ans++;
            }
        }

        pf(ans);
        nl;
    }

    return 0;

}

//-----------------------------------***********************----------------------------------------------//