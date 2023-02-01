

#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define PR pair<ll,ll>
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld",&n,&m)
#define sf3(n, m,k ) scanf("%lld %lld %lld",&n,&m,&k)
#define pfn(n) printf("%d\n",n)
#define pf1(n) printf("%d ",n)
#define pfl1(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define YES printf("YES\n")
#define NO printf("NO\n")
#define minus1 printf("-1\n")
#define PB push_back
#define PI 3.1415926536
#define VST(v) sort(v.begin(),v.end())
#define VSTcmp(v,cmp) sort(v.begin(),v.end(),cmp)
#define fori(i,n) for(;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
#define MP make_pair
#define ff first
#define ss second
#define tt third
#define mem(ar,a) memset(ar,a,sizeof(ar))

typedef long long int ll;
using namespace std;

vector<ll>V,V2,V3;
ll ar[2000000]= {0};
int main()
{
    ll tcase=1;
    sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        memset(ar,0,sizeof(ar));
        V.clear();
        ll n,k,d,cnt=0,ma=INT_MAX;
        sf3(n,k,d);
        for(ll i=0; i<n; i++)
        {
            ll a;
            sf1(a);
            V.PB(a);
        }
        ll left=0,right=0;
        while(right<d)
        {
            if(ar[V[right]]==0)
            {
                cnt++;
            }
            ar[V[right]]++;
            right++;
        }
        ma=min(ma,cnt);
        while(right<n)
        {
            if(V[left]==V[right])
            {
                left++;
                right++;
                continue;
            }
            ar[V[left]]--;
            if(ar[V[left]]==0)
                cnt--;
            if(ar[V[right]]==0)
            {
                cnt++;
            }
            ar[V[right]]++;
            ma=min(cnt,ma);
            left++;
            right++;
        }
        printf("%lld\n",ma);
    }
}