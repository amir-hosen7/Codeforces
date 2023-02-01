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
#define nl printf("\n")
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

///cin.ignore();
void FastIO()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}
ll max(ll a,ll b)
{
    if(a>b) return a;
    else return b;
}
ll min(ll a,ll b)
{
    if(a<b) return a;
    else return b;
}
ll pow(ll B,ll P)
{
    ll S=1;
    for(ll i=1; i<=P; i++) S=S*B;
    return S;
}
int fx4[]= {1,-1,0,0};
int fy4[]= {0,0,1,-1};

///******************************************************************************///

int main()
{
    FastIO();

    int stairs,dirty;
    vector <int> A;
    int a;
    cin>>stairs>>dirty;
    bool check=true;

    for(int i=0; i<dirty; i++)
    {
        cin>>a;
        A.pb(a);
        if(A[i]==1 || A[i]==stairs) check=false;
    }

    if(check==false)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    sort(A.begin(),A.end());
    for(int i=1; i<dirty; i++)
    {
        if(A[i] - A[i-1] == 1 && A[i + 1] - A[i] == 1)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}