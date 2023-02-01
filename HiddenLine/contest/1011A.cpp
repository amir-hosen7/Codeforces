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
#define amir return 0

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main()
{
    int n, k;
    sff(n, k);

    char str[51];
    cin >> str;

    int sum = 0, check = 0, temp = 0, p = 0, cont = 1;
    char str2[51];
    sort(str, str + n);
    //str[n] = 'A';

    for(int i = 0; i < n; i++)
    {
        if(str[i] != str[i + 1])
        {
            str2[p] = str[i];
            p++;
        }
    }

    str2[p] = '\0';
    sum += (int) str[0] - 96;
    check = 1;

    if(check == k)
    {
        prln(sum);
        amir;
    }

    int a, b;
    for(int i = 1; i < p; i++)
    {
        a = (int) str2[i];
        b = (int) str2[temp];

        if((a - b) >= 2)
        {
            sum += (a - 96);
            cont++;
            temp = i;
            if(cont == k)
                break;
        }
    }

    if(cont == k)
        prln(sum);
    else
        printf("-1\n");

    return 0;
}



/*****************  ALHAMDULILLAH  *****************/