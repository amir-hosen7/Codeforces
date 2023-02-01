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
		ll n, q;
		cin>>n>>q;
		vector<ll> v(n);
		ll even_sum=0, tot_sum=0, even=0;
		for(ll i=0; i<n; i++){
			cin>>v[i];
			if(v[i]%2==0){
				even++;
				even_sum+=v[i];
			}
			tot_sum+=v[i];
		}
		ll odd_sum=tot_sum-even_sum, odd=n-even;
		while(q--){
			ll type, x;
			cin>>type>>x;
			if(type==0){
				even_sum=even_sum+(x*even);
				cout<<even_sum+odd_sum<<"\n";
				if(x%2==1){
					odd+=even, even=0;
					odd_sum+=even_sum, even_sum=0;
				}
			}
			else{
				odd_sum=odd_sum+(x*odd);
				cout<<even_sum+odd_sum<<"\n";
				if(x%2==1){
					even+=odd, odd=0;
					even_sum+=odd_sum, odd_sum=0;
				}
			}
		}
	}
	return 0;
}