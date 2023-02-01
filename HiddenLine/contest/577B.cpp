#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 1e18
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
typedef tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

ll dp[1010][5010];

ll solve(ll idx, ll n, ll sum, ll m, vector<ll>& v, ll flag){
	//cout<<idx<<" "<<n<<" "<<sum <<" "<<flag<<" \n";
	if(sum%m==0 and flag!=-1) return 1;
	if(idx>n){
		if(sum%m==0 and flag!=-1) return 1;
		return 0;
	}
	if(dp[idx][sum]!=-1) return dp[idx][sum];
	ll ans=0;
	for(ll i=1; i<=v[idx]; i++){
		ans=ans|solve(idx+1, n, (sum+(i*idx))%m, m, v, 1);
	}
	ll ans2=solve(idx+1, n, sum, m, v, flag);
	return dp[idx][sum]=ans|ans2;
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	for(ll T=1; T<=t; T++){
		ll n, m;
		cin>>n>>m;
		bool ok=0;
		ll mx=0, mi=m+50;
		vector<ll> v(n), cnt(m+50, 0);
		for(ll i=0; i<n; i++){
			cin>>v[i];
			ll rem=v[i]%m;
			if(rem==0) ok=1;
			cnt[rem]++;
			if((cnt[rem]*rem)%m==0) ok=1;
			mx=max(mx, rem);
			mi=min(mi, rem);
		}
		if(!ok){
			memset(dp, -1, sizeof(dp));
			ok=solve(mi, mx, 0, m, cnt, -1);
		}
		yesNo(ok);
	}
	return 0;
}