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
#define s                   second
#define f                   first
#define PI                  3.1415926

//-----------------------------------***********************----------------------------------------------//

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 1000002;

int main()
{
    int test;
    sf(test);
    while(test--)
    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(NULL);
//        cout.tie(NULL);

        long long int n, x, y, d;
        cin >> n >> x >> y >> d;

        int tmp = abs(x-y);
        if(tmp % d == 0)
            cout << tmp/d << endl;
        else if(((y-1) % d == 0) and ((n-y) % d == 0))
        {
            int a = x/d + (x%d > 1) + (y-1)/d;
            int b = (n-x)/d + ((n-x)%d != 0) + (n-y)/d;
            cout << min(a, b) << endl;
        }
        else if(((y-1) % d == 0))
            cout << x/d + (x%d > 1) + (y-1)/d << endl;
        else if(((n-y) % d == 0))
            cout << (n-x)/d + ((n-x)%d != 0) + (n-y)/d << endl;
        else cout << -1 << endl;
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//