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
        int a, b, c, ans = 0;
        cin >> a >> b >> c;
        for(int i = 0; i < c; i++)
        {
            ans += (a*2) + (b*2) - 4;
            a -= 4;
            b -= 4;
        }
        cout << ans << endl;
    return 0;

}

//-----------------------------------***********************----------------------------------------------//