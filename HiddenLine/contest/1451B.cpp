#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t; cin>>t;
	while(t--){
		ll n,q; cin>>n>>q;
		string s; cin>>s;
		ll l,r;
		while(q--){
			cin>>l>>r;
			ll ok=0;
			char first=s[l-1],last=s[r-1];
			for(ll i=l-2; i>=0; i--){
				if(s[i]==first){
					ok=1; break;
				}
			}
			if(!ok){
				for(ll i=r; i<n; i++){
					if(s[i]==last){
						ok=1; break;
					}
				}
			}
			if(ok){cout<<"YES\n";}
			else{cout<<"NO\n";}
		}
	}
	
	return 0;
}