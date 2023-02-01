#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll res = 0;
		for(ll i=1; i<=30; i++){
			ll sz = (1<<i)-1;
			ll cost = sz*(sz+1)/2;
			if(cost>n){break;}
			res++; n -= cost;
		}
		cout<<res<<"\n";
	}
	return 0;
}