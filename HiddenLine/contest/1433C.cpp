#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll mx=0;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i]; mx=max(mx, v[i]);
		}
		ll res = -1;
		for(ll i=0; i<n; i++){
			if(i==0){
				if(v[i]==mx and v[i+1]!=mx){
					res = i; res++;
				}
				else if(v[i]!=mx and v[i+1]==mx){
					res = i+1; res++;
				}
			}
			else if(i==(n-1)){
				if(v[i]==mx and v[i-1]!=mx){
					res = i; res++;
				}
				else if(v[i]!=mx and v[i-1]==mx){
					res = i-1; res++;
				}
			}
			else{
				if((v[i]==mx and v[i-1]!=mx) or (v[i]==mx and v[i+1]!=mx)){
					res = i; res++;
				}
			}
			if(res != -1){break;}
		}
		cout<<res<<"\n";
	}
	
	return 0;
}