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
#define mod 1000000007

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

vector<PR>V,V2,V3;
int main()
{
    ll tcase=1;
    sf1(tcase);
    for(ll test=1; test<=tcase; test++)
    {
        V.clear();
        string s,s2;
        ll n;
        sf1(n);
        cin>>s>>s2;
        //sort(s.begin(),s.end());
        //sort(s2.begin(),s2.end());
        for(ll i=0; s[i]!='\0'; i++)
        {
            if(s2[i]!=s[i])
            {
                //printf("test\n");
                ll ck=1;
                for(ll j=i+1; j<n&&ck; j++)
                {
                    if((s2[j]==s2[i])&&(s[j]!=s2[j]))
                    {
                        V.PB({i+1,j+1});
                        string s3;
                        s3=s2[j];
                        s2[j]=s[i];
                        s[i]=s3[0];
                        ck=0;
                        break;
                        // printf("testin\n");
                    }
                }
                if(ck==1)
                {
                    for(ll j=i+1; j<n&&ck; j++)
                    {
                        if((s[j]==s2[i])&&(s[j]!=s2[j]))
                        {
                            V.PB({j+1,j+1});
                            V.PB({i+1,j+1});
                            string s3,s4;
                            s3=s2[j];
                            s2[j]=s[j];
                            s[j]=s3[0];

                            s4=s2[j];
                            s2[j]=s[i];
                            s[i]=s4[0];
                            ck=0;break;
                            // printf("testin\n");
                        }
                    }
                }
                if(ck==1)break;
            }
        }
        // cout<<s<<" "<<s2<<endl;
        if(s==s2)
        {
            printf("Yes\n");
            ll l=V.size();
            printf("%lld\n",l);
            for(ll i=0; i<l; i++)
            {
                printf("%lld %lld\n",V[i].ff,V[i].ss);
            }
        }
        else
        {
            printf("No\n");
        }

        // printf("%d\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}