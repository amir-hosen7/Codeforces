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

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll n;
		cin>>n;
		if(n==1){
			cout<<"1\n";
			continue;
		}
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			v[i]=i+1;
		}
		if(n%2){
			for(ll i=n-1; i>=2; i-=2){
				swap(v[i], v[i-1]);
			}
		}
		else{
			for(ll i=0; i<(n-1); i+=2){
				swap(v[i], v[i+1]);
			}
		}
		for(ll i=1; i<=n; i++){
			cout<<v[i-1]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}