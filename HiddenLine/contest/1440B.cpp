#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
 
	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t; cin>>t;
	while(t--){
		ll n, k;
		cin>>n>>k;
		ll siz=n*k;
		vector<ll> v(siz+1);
		for(ll i=1; i<=(n*k); i++){
			cin>>v[i];
		}
		ll mid=n/2, res=0;
		for(ll i=(k*n)-mid; i>=1,k; i-=(mid+1),k--){
			res += v[i];
		}
		cout<<res<<"\n";
	}
	return 0;
}