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
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

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
    int total;
    sf(total);

    if(total == 1)
    {
        printf("1\n1\n");
        return 0;
    }
    int ar[1001], ar2[1001], cont = 1;
    for(int i = 0; i < total; i++)
    {
        sf(ar[i]);
    }

    int p = 0;
    for(int i = 0; i < total - 1; i++)
    {
        if(ar[i] < ar[i + 1])
        {
            cont ++;
        }
        else
        {
            ar2[p++] = cont;
            cont = 1;
        }

        if(i == total - 2)
        {
            ar2[p++] = cont;
        }
    }

    prln(p);
    for(int i = 0; i < p; i++)
    {
        pf(ar2[i]);
    }
    nl;

    return 0;

}



/*****************  ALHAMDULILLAH  *****************/