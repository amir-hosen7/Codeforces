/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**            Amantu Amir - white Hacker               **/
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
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)

#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    long long  int h;
    sfl(h);

    int cont = 0;
    if(h >= 5)
    {
        while(h >= 5)
        {
            h -= 5;
            cont++;
        }
    }

    if(h >= 4)
    {
        while(h >= 4)
        {
            h -= 4;
            cont++;
        }
    }

    if(h >= 3)
    {
        while(h >= 3)
        {
            h -= 3;
            cont++;
        }
    }

    if(h >= 2)
    {
        while(h >= 2)
        {
            h -= 2;
            cont++;
        }
    }

    if(h == 1)
        cont++;

    prln(cont);



    return 0;

}



/*****************  ALHAMDULILLAH  *****************/