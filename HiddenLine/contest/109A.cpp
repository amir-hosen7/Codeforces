/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**            Amantu Amir - White Hacker               **/
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

#define prl(n) printf("%d\n",n)
#define prln(n) printf("%d", n);
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
    ll n, temp;
    sfl(n);

    if(n % 7 == 0)
    {
        for(int i = 1; i <= (n/7); i++)
            printf("7");
        nl;
        return 0;
    }
    else
    {
        for(int i = 1; (i * 4) <= n; i++)
        {
            temp = n - (i * 4);
            if(temp % 7 == 0)
            {
                for(int j = 1; j <= i; j++)
                    printf("4");
                for(int k = 1; k <= (temp/7); k++)
                    printf("7");
                nl;
                return 0;
            }
        }

    }

    if(n % 4 == 0)
    {
        for(int i = 1; i <= (n/4); i++)
        {
            printf("4");
        }
        nl;
        return 0;
    }
    else
    {
        printf("-1");
        nl;
        return 0;
    }

    return 0;
}



/*****************  ALHAMDULILLAH  *****************/