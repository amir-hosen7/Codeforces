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
const int N = 100010;


ll a[N], b[N], c[N];

int main()
{
    int test = 1;
    while(test--)
    {
//        ios_base::sync_with_stdio(false);
//        cin.tie(NULL);
        int n, k;
        sff(n, k);

        for(int i = 0; i < n; i++)
        {
            sfl(a[i]);
        }

        sort(a, a+n);
        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != a[i+1])
            {
                b[cnt] = a[i];
                c[cnt] = a[i];
                cnt++;
            }
        }

//        for(int i = 0; i < cnt; i++)
//            cout << b[i] << " ";
//        nl;

        for(int i = 0; i < k; i++)
        {
            if(b[i] > 0)
                cout << b[i] << endl;
            else cout << 0 << endl;
            b[i+1] -= c[i];
        }
    }

    return 0;

}

//-----------------------------------***********************----------------------------------------------//