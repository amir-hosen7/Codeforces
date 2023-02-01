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

#define pt(n) printf("%d", n)
#define pf(n) printf("%d ", n)
#define pff(n) printf("%d %d\n", m, n)
#define pfl(n) printf("%lld ", n)
#define pfu(n) printf("%llu\n", n)
#define pfs(s) printf("%s", s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 101000;

int main()
{
    int t = 1;
    while(t--)
    {
        int n1, n2, k1, k2;
        cin >> n1 >> n2 >> k1 >> k2;
        if(n1 <= n2) printf("Second\n");
        else printf("First\n");
    }

    return 0;

}