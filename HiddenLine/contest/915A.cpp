/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**            Amantu Amir - Hacker               **/
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
#define N 200100
#define pp pair<ll,ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;


int main()
{
    int n, k;
    sff(n, k);

    int a, minm = 10000, ans;
    for(int i = 0; i < n; i++)
    {
        sf(a);
        if(k % a == 0)
        {
            ans = k / a;
            minm = min(minm, ans);
        }
    }

    prln(minm);

    return 0;
}



/*****************  ALHAMDULILLAH  *****************/