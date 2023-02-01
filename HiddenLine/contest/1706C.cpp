#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 2147483647
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=1e5+50;
const ll mod=1e9+7;

ll dp[N][2];

ll solve(ll idx, ll n, ll flag, vector<ll>& v){
    if(dp[idx][flag]!=-1){
        return dp[idx][flag];
    }
    ll ans;
    if(flag==0){
        ll mx=max(v[idx-1], v[idx+1]);
        ll ans1=max(0LL, (mx-v[idx]+1)), ans2=inf;
        if((idx+2)<(n-1)){
            ans1+=solve(idx+2, n, 0, v);
        }
        if((idx+1)<(n-1)){
            ans2=solve(idx+1, n, 1, v);
        }
        ans=min(ans1, ans2);
    }
    else{
        ll mx=max(v[idx-1], v[idx+1]);
        ans=max(0LL, (mx-v[idx]+1));
        if((idx+2)<(n-1)){
            ans+=solve(idx+2, n, 1, v);
        }
    }
    return dp[idx][flag]=ans;
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        if(n%2==1){
            ll ans=0;
            for(ll i=1; i<=(n-2); i+=2){
                ll mx=max(v[i-1], v[i+1]);
                ans+=max(0LL, (mx-v[i]+1));
            }
            cout<<ans<<"\n";
        }
        else{
            for(ll i=0; i<=n; i++){
                dp[i][0]=dp[i][1]=-1;
            }
            ll ans=solve(1, n, 0, v);
            cout<<ans<<"\n";
        }
	}
	return 0;
}