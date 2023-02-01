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
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define prln(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)
#define pb push_back

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;


int main()
{
    string s;
    cin >> s;

    int len = s.length(), upper = 0, lower = 0, i, position;
    for(i = 0; i < len; i++)
    {

        if(s[i] >= 97 && s[i] <= 122)
        {
            lower++;
            position = i;
        }

        else if(s[i] >= 65 && s[i] <= 90)
            upper++;
    }


    if((lower - 1 == 0 && position == 0) || upper == len)
    {
        for(int i = 0; i < len; i++)
        {
            if(s[i] >= 97 && s[i] <= 122)
                cout << (char)(s[i] - 32);
            else
                cout << (char)(s[i] + 32);
        }
        cout << endl;
    }
    else
        cout << s << endl;

    return 0;
}



/*****************  ALHAMDULILLAH  *****************/