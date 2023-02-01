
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
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sffl(n,m) scanf("%lld %lld",&n,&m)

#define pf(n) printf("%d ",n)
#define prln(n) printf("%d\n",n)
#define pfl(n) printf("%lld\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;


int main()
{
    int n;
    sf(n);

    for(int i = 1; i <= n; i++)
    {
        cout << "I ";

        if(i % 2 == 1)
            cout << "hate ";
        else if(i % 2== 0)
            cout << "love ";

        if(i == n)
            cout << " it";
        else
            cout << "that ";
    }
    cout << endl;

    return 0;


}



/*****************  ALHAMDULILLAH  *****************/