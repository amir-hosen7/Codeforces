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
    int n;
    string s;
    map <string, int> m;
    map <string, int> :: iterator it;

    m["January"] = 1;
    m["February"] = 2;
    m["March"] = 3;
    m["April"] = 4;
    m["May"] = 5;
    m["June"] = 6;
    m["July"] = 7;
    m["August"] = 8;
    m["September"] = 9;
    m["October"] = 10;
    m["November"] = 11;
    m["December"] = 0;

    cin >> s >> n;
    n = (m[s] + n) % 12;

    for(it = m.begin(); it != m.end(); it++)
    {
        if(it->second == n)
        {
            cout<<it->first<<endl;
            break;
        }
    }


    return 0;

}



/*****************  ALHAMDULILLAH  *****************/