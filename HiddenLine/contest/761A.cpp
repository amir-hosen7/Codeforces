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
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n,m) scanf("%lld%Ild",&n,&m)

#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    int a, b;
    sff(a, b);

    if(a == 0 && b == 0)
    {
        printf("NO\n");
        return 0;
    }
    if(abs(a - b) == 1 || abs(a - b) == 0)
        printf("YES\n");
    else
        printf("NO\n");


    return 0;

}



/*****************  ALHAMDULILLAH  *****************/