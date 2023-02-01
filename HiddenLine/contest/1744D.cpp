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
		ll a, tot=0;
		for(ll i=0; i<n; i++){
			cin>>a;
			ll cnt=0;
			while(a%2==0){
				cnt++, a/=2;
			}
			tot+=cnt;
			ll b=i+1, cnt2=0;
			while(b%2==0){
				cnt2++, b/=2;
			}
			v[i]=cnt2;
		}
		if(tot>=n){
			cout<<"0\n"; continue;
		}
		sort(all(v));
		reverse(all(v));
		ll res=0;
		for(ll i=0; i<n; i++){
			if(n>tot){
				res++;
				tot+=v[i];
			}
		}
		if(tot<n) res=-1;
		cout<<res<<"\n";
	}
	return 0;
}