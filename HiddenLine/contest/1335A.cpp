#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t,n; cin>>t;
	for(ll T=1; T<=t; T++){
		cin>>n;
		ll res = n/2;
		if(n%2==0){res-=1;}
		cout<<res<<"\n";
	}
	return 0;
}