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
//typedef tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>pbds;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>pbds;
//typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>pbds;

//------------------------------------------------------------------------------//


const ll P=29;
const ll N=1e5+50;
const ll M=1e7;
const ll mod=1e9+7;

vector<ll>divisors[N];

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll n,l,r;
		cin>>n>>l>>r;
		ll ok=1;
		vector<ll>ans;
		for(ll i=1; i<=n; i++){
			if(l%i==0){
				ans.pb(l);
			}
			else{
				ll aa=(l/i)*i;
				while(aa<l){
					aa+=i;
				}
				if(aa>r){
					ok=0; break;
				}
				ans.pb(aa);
			}
		}
		if(ok){
			cout<<"YES\n";
			for(auto i:ans){
				cout<<i<<" ";
			}
			cout<<"\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}