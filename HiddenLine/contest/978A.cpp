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
   // freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin>>ar[i];
    for(int i = n - 1; i >= 0; i--)
    {
        if(ar[i] > 0)
        {
            for(int j = i; j >= 0; j--)
            {
                if(ar[i] == ar[j - 1])
                {
                    ar[j - 1] = 0;
                }
            }
        }
    }
    int cont = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > 0)
        {
            cont++;
        }
    }
    cout<<cont<<endl;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > 0)
            cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*****************  ALHAMDULILLAH  *****************/