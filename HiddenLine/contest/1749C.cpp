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
		sort(all(v));
		ll L=1, R=n, res=0;
		while(L<=R){
			ll mid=L+(R-L)/2;
			ll idx=upper_bound(all(v), mid)-v.begin();
			ll a=0, b=idx-1, curr=0;
			while(a<=b){
				if(v[b]<=(mid-(curr+1)+1)){
					a++, curr++;
				}
				b--;
			}
			//cout<<mid<<" "<<curr<<"\n";
			if(mid==curr){
				L=mid+1, res=mid;
			}
			else{
				R=mid-1;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}