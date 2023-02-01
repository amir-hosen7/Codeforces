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
		cout<<n<<" ";
		for(ll i=1; i<n; i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}