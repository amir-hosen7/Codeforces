#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n,a; cin>>n;
		ll cnt[35];
		for(ll i=0; i<35; i++){cnt[i]=0;}
		for(ll i=0; i<n; i++){
			cin>>a;
			ll b = (32-__builtin_clz(a));
			cnt[b]++;
		}
		ll ans = 0;
		for(ll i=1; i<=32; i++){
			ans += (cnt[i]*(cnt[i]-1))/2;
		}
		cout<<ans<<"\n";
	}
	return 0;
}