/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**            Amantu Amir - Gray_Hacker               **/
/**  Department of Computer Science and Engineering  **/
/**            University  of Barisal               **/
/**                   Bangladesh                         **/
/******************************************************/
/******************************************************/
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
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)

#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pff(n) printf("%d %d\n",m, n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 1000 * 100 ;
int ar[1001];

int main()
{
    int n;
    sf(n);

    int a, b, c, d, tmp;
    for(int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        ar[i] = (a + b + c + d);
    }

    tmp = ar[0];
    int rnk = 1;
    sort(ar, ar + n, greater<int>());
    for(int i = 0; i < n; i++)
    {
        if(ar[i] == tmp)
        {
            prln(rnk);
            return 0;
        }
        rnk++;
    }
}



/*****************  ALHAMDULILLAH  *****************/