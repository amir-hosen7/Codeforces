#include<bits/stdc++.h>
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
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		vector<pair<ll, ll>> A;
		unordered_map<ll, bool> mark;
		for(ll i=n-1; i>=0; i--){
			if(mark[v[i]]==0){
				A.pb({v[i], i+1});
				mark[v[i]]=1;
			}
		}
		ll ans=-1, idx=A.size();
		for(ll i=0; i<idx; i++){
			for(ll j=i; j<idx; j++){
				if(__gcd(A[i].F, A[j].F)==1){
					ans=max(ans, A[i].S+A[j].S);
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}