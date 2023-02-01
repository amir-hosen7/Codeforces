#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		ll cnt=0, flag=0, ck=0, ans=0, a;
		for(ll i=0; i<n; i++){
			cin>>a;
			if(a and !ck){
				flag=1; ck=1;
			}
			if(flag and !a){
				cnt++;
			}
			if(a){
				ans=cnt;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}