#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t; cin>>t;
	while(t--){
		ll x,y; cin>>x>>y;
		ll mx = max(x,y), mi = min(x,y);
		ll left = mx-mi;
		ll res = mi*2;
		if(left){res += (left*2)-1;}
		cout<<res<<"\n";
	}
	
	return 0;
}