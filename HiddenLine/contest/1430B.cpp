#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	ll n,k;
	for(ll T=1; T<=t; T++){
		cin>>n>>k;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<ll>());
		ll res = 0;
		for(ll i=0; i<=k; i++){
			res += v[i];
		}
		cout<<res<<"\n";
	}
	return 0;
}