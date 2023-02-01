/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**         Amantu Amir - Hacker               **/
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

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{

    int m, d;
    sff(m, d);

    int month;
    if(m == 1)
        month = 31;
    else if(m == 2)
        month = 28;
    else if(m == 3)
        month = 31;
    else if(m == 4)
        month = 30;
    else if(m == 5)
        month = 31;
    else if(m == 6)
        month = 30;
    else if(m == 7)
        month = 31;
    else if(m == 8)
        month = 31;
    else if(m == 9)
        month = 30;
    else if(m == 10)
        month = 31;
    else if(m == 11)
        month = 30;
    else if(m == 12)
        month = 31;

        int cont = 0, i = 0;
        month += d - 1;
   while(1)
    {
        i += 7;
        cont++;
        if(i >= month)
            break;

    }
    pf(cont);
    return 0;
}
/*****************  ALHAMDULILLAH  *****************/