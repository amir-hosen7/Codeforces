#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin>>n;
	vector<ll> v(n),ans(v);
	for(ll i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(ll i=0; i<n/2; i++){
		ans[(i*2)+1] = v[i];
	}
	for(ll i=n/2; i<n; i++){
		ans[2*(i-n/2)] = v[i];
	}
	ll res = 0;
	for(ll i=1; i<(n-1); i++){
		if(ans[i]<ans[i-1] and ans[i]<ans[i+1]){
			res++;
		}
	}
	cout<<res<<"\n";
	for(ll i=0; i<n; i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}