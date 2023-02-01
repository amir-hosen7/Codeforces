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
// ll X[] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[] = {1, 2, 2, 1, -1, -2, -2, -1};
//8 direction
// ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//4 direction
// ll dx[]={1, -1, 0, 0};
// ll dy[]={0, 0, 1, -1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll n;
		cin>>n;
		vector<ll> v(n), cum(n+1);
		cum[0]=0;
		for(ll i=0; i<n; i++){
			cin>>v[i];
			cum[i+1]=cum[i]+v[i];
		}
		ll res=n;
		for(ll i=1; i<=n; i++){
			ll sum=0, cnt=0, ok=1, currAns=0;
			for(ll j=0; j<n; j++){
				if(sum<cum[i]){
					cnt++;
					sum+=v[j];
				}
				if(sum==cum[i]){
					currAns=max(currAns, cnt);
					cnt=0, sum=0;
				}
				if(sum>cum[i]){
					ok=0; break;
				}
			}
			if(ok and cum[n]%cum[i]==0){
				res=min(res, currAns);
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}