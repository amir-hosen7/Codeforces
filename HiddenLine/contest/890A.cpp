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
    int ar[6], sum = 0, rest;
    bool check = true;
    for(int i = 0; i < 6; i++)
    {
        sf(ar[i]);
        sum += ar[i];
    }

    for(int i = 0; i < 6 && check; i++)
    {
        for(int j = 0; j < 6 && check; j++)
        {
            for(int k = 0; k < 6 && check; k++)
            {
                if(i != j && i != k && j != k)
                {
                    rest = sum - (ar[i] + ar[j] + ar[k]);
                    if(rest ==  (ar[i] + ar[j] + ar[k]))
                    {
                        check = false;
                    }
                }
            }
        }
    }

    cout << (!check?"YES":"NO") << endl;


    return 0;
}
/*****************  ALHAMDULILLAH  *****************/