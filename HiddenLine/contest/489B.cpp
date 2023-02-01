/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**                     Amantu Amir - Hacker               **/
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
    int ar[101], ar1[101];
    int boy, girl;

    sf(boy);
    for(int i = 0; i < boy; i++)
    {
        sf(ar[i]);
    }
    sort(ar, ar + boy);

    sf(girl);
    for(int i = 0; i < girl; i++)
    {
        sf(ar1[i]);
    }
    sort(ar1, ar1 + girl);

    int cont = 0;
    for(int i = 0; i < boy; i++)
    {
        for(int j = 0; j < girl; j++)
        {
            if(ar[i] == ar1[j] || ar[i] == ar1[j] + 1 || ar[i] == ar1[j] - 1)
            {
                ar1[j] = -111;
                cont++;
                break;
            }
        }
    }

    pf(cont);

    return 0;
}
/*****************  ALHAMDULILLAH  *****************/