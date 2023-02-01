/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**            Amantu Amir - Hacker               **/
/**  Department of Computer Science & Engineering  **/
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
        int n;
        sf(n);

        int ar[101], ar2[101], p = 0;

        for(int i = 1; i <= n; i++)
            ar[i] = 1;

        int j, tmp[101], sum;
        
        for(int i = 1; i <= n - 1; i++)
        {
            for(j = 1; j <= n; j++)
            {
                
                sum = 0;
                for(int k = 1; k <= j; k++)
                {
                    sum += ar[k];
                }
                tmp[j] = sum;
            }
            
            for(int l = 1; l <= n; l++)
            {
                ar[l] = tmp[l];
            }
        }
        pt(sum);
        nl;
    }

    return 0;

}



/*****************  ALHAMDULILLAH  *****************/