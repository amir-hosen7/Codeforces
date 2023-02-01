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
#define nl printf("\n")
#define pp pair<ll,ll>
#define mem(a, s) memset(a, s, sizeof a)
#define vst(v) sort(v.begin(),v.end())
#define dsrt(v) sort(v.begin(),v.end(), greater <int> ())
#define vas(tmp, v) tmp.assign(v.begin(), v.end())
#define rep(i, l, r) for (int i = (l); i < (r); ++i)
#define sf(n) scanf("%d", &n)
#define sfs(s) scanf("%s", s)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)

#define pf(n) printf("%d", n)
#define sp printf(" ")
#define prln(n) printf("%d\n", n)
#define pff(n) printf("%d %d\n", m, n)
#define pfl(n) printf("%lld ", n)
#define pfu(n) printf("%llu\n", n)
#define pfs(s) printf("%s", s)
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
        int n, a[3], b;
        cin >> n >> a[0] >> a[1] >> a[2];
        sort(a, a+3);

        int mx = 0;
        for(int i = 0; i <= n/a[2]; i++)
        {
            for(int j = 0; j <= n/a[1]; j++)
            {
                b = n - i*a[2] - j*a[1];
                if(b%a[0] == 0)
                    mx = max(mx, (i+j+b/a[0]));
            }
        }
        cout << mx << endl;
    }
    return 0;
}

//-----------------------------------***********************----------------------------------------------//