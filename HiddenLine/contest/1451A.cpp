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
		if(n<4){cout<<(n-1)<<"\n";continue;}
		ll res=2;
		if(n&1){res=3;}
		cout<<res<<"\n";
	}
	return 0;
}