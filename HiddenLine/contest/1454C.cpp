#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t; cin>>t;
	while(t--){
		ll n,a; cin>>n;
		vector<ll>v;
		map<ll,ll>mp;
		for(ll i=0; i<n; i++){
			cin>>a;
			if(v.size()){
				if(v.back()==a){continue;}
			}
			v.push_back(a);
			mp[a]++;
		}
		ll res=INT_MAX;
		for(ll i=1; i<=n; i++){
			if(mp[i]==0){continue;}
			ll curr=mp[i]-1;
			if(v[0]!=i){curr++;}
			if(v.size()>1){
				if(v.back()!=i){curr++;}
			}
			res=min(res,curr);
		}
		cout<<res<<"\n";
	}
	return 0;
}