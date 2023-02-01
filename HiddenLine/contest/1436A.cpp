#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	while(t--){
		ll n,m,a,sum=0; cin>>n>>m;
		for(ll i=0; i<n; i++){
			cin>>a; sum+=a;
		}
		if(sum==m){cout<<"YES\n";}
		else{cout<<"NO\n";}
	}
	return 0;
}