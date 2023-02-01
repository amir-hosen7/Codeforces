#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t; cin>>t;
	while(t--){
		ll n, c0, c1, h;
		cin>>n>>c0>>c1>>h;
		string s; cin>>s;
		ll one=0, zero=0, res;
		for(ll i=0; i<n; i++){
			if(s[i]=='1'){
				one++;
			}
			else{
				zero++;
			}
		}
		res = min(min((c0*n)+(one*h), (c0*zero)+(c1*one)), (c1*n)+(zero*h));
		cout<<res<<"\n";
	}
	return 0;
}