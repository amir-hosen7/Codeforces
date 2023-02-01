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
		ll sum=0, a, mx=0;
		for(ll i=0; i<n; i++){
			cin>>a; sum+=a;
			mx = max(mx, a);
		}
		ll avg = sum/(n-1) + (sum%(n-1)!=0);
		ll rem = max(avg, mx);
		ll ans = rem*(n-1)-sum;
		cout<<ans<<"\n";
	}
	
	return 0;
}