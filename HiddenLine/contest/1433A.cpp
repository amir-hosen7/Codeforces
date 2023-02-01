#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		ll rem = n%10;
		ll ans = 10*(rem-1);
		ll temp = rem, cnt=1;
		while(temp<=n){
			temp = temp*10+rem;
			ans+=(cnt++);
		}
		cout<<ans<<"\n";
	}
	return 0;
}