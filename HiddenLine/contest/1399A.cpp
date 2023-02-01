#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t,n; cin>>t;
	for(ll T=1; T<=t; T++){
		cin>>n;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll ok = 1;
		for(ll i=0; i<(n-1); i++){
			if((v[i+1]-v[i])>1){
				ok = 0;
				break;
			}
		}
		if(ok){cout<<"YES\n";}
		else {cout<<"NO\n";}
	}
	return 0;
}