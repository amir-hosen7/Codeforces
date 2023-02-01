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
#define pff(n) printf("%d %d\n",m, n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    int ar[5][5], temp, temp2;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            sf(ar[i][j]);
            if(ar[i][j] == 1)
            {
                temp = i;
                temp2 = j;
            }
        }
    }

    int cont = 0, cont2 = 0;
    if(temp > 2)
    {
        temp -= 1;
        cont = 1;
        if(temp != 2)
            cont = 2;
    }
    else if(temp < 2)
    {
        temp += 1;
        cont = 1;
        if(temp != 2)
            cont = 2;
    }

    if(temp2 > 2)
    {
        temp2 -= 1;
        cont2 = 1;
        if(temp2 != 2)
            cont2 = 2;
    }
    else if(temp2 < 2)
    {
        temp2 += 1;
        cont2 = 1;
        if(temp2 != 2)
            cont2 = 2;
    }

    prln(cont + cont2);

    return 0;

}



/*****************  ALHAMDULILLAH  *****************/