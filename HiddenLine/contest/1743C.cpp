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
		string s;
		cin>>s;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		ll Min=INT_MAX, ok=0, zero=-1, idx=0;
		for(ll i=0; i<n; i++){
			if(s[i]=='0'){
				//cout<<zero<<" "<<idx<<"\n";
				if(ok==1 and zero!=-1){
					if(v[zero]>v[idx]){
						swap(s[idx], s[zero]);
					}
				}
				zero=i;
				ok=0;
				Min=INT_MAX;
			}
			else{
				ok=1;
				if(Min>v[i]){
					Min=v[i], idx=i;
				}
			}
		}
		if(ok==1 and zero!=-1){
			//cout<<zero<<" "<<idx<<"\n";
			if(v[zero]>v[idx]){
				swap(s[idx], s[zero]);
			}
		}
		ll ans=0;
		for(ll i=0; i<n; i++){
			if(s[i]=='1'){
				ans+=v[i];
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}