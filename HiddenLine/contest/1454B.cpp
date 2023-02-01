#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
 
	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<pair<ll,ll>> v;
		ll a;
		map<ll,ll> m;
		for(ll i=1; i<=n; i++){
			cin>>a; m[a]++;
			v.push_back({a,i});
		}
		sort(v.begin(), v.end());
		ll res,ok=0;
		for(ll i=0; i<n; i++){
			if(m[v[i].first]==1){
				ok=1;
				res=v[i].second;
				break;
			}
		}
		if(ok==0){
			cout<<"-1\n";
		}
		else{
			cout<<res<<"\n";
		}
	}
	
	return 0;
}