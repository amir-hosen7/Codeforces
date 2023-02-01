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
#define pp pair<ll,ll>
#define mem(a, s) memset(a, s, sizeof a)
#define rep(i, l, r) for (int i = (l); i <= (r); ++i)
#define sf(n) scanf("%d", &n)
#define sfs(s) scanf("%s", s)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define input(a) cin >> a;
#define output(a) cout << a;
#define pf(n) printf("%d ", n)
#define sp printf(" ")
#define prln(n) printf("%d\n", n)
#define pff(n) printf("%d %d\n", m, n)
#define pfl(n) printf("%lld ", n)
#define pfu(n) printf("%llu\n", n)
#define pfs(s) printf("%s", s)
#define pb push_back
#define     maxi            1000000000000014
#define     mini            -100000000000014

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 101000;

int main()
{
    int t = 1;
    while(t--)
    {
        ull n, k, a, b;
        cin >> n >> k >> a >> b;

        if(n < k || k == 1)
            return cout << (n-1)*a << endl, 0;

        ll cost = 0;
        while(n >= k)
        {
            cost += (n%k)*a;
            n -= (n%k);
            ll x = n - (n/k);

            if((x*a) > b)
                cost += b;
            else cost += (x*a);
            n /= k;
        }

        cost += (n-1) * a;
        cout << cost << endl;
    }

    return 0;

}