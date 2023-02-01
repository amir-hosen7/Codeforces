#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);

int main()
{
    ll t=1;
    cin>>t;
    for(ll test=1; test<=t; test++)
    {
        vector<ll>V;
        ll x,n;
        cin>>x>>n;
        if(x%2==0){
            ll di=n/4;
            n%=4;
            if(n==0){
                cout<<x<<"\n";
            }
            else if(n==1){
                cout<<x-(4*di)-1<<"\n";
            }
            else if(n==2){
                cout<<x+1<<"\n";
            }
            else{
                cout<<x+((di+1)*4)<<"\n";
            }
        }
        else{
            ll di=n/4;
            n%=4;
            if(n==0){
                cout<<x<<"\n";
            }
            else if(n==1){
                cout<<x+1+(di*4)<<"\n";
            }
            else if(n==2){
                cout<<x-1<<"\n";
            }
            else if(n==3){
                cout<<x-((di+1)*4)<<"\n";
            }
        }
    }
    return 0;
}