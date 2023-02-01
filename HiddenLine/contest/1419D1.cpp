#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n; cin>>n;
	vector<ll>v(n);
	for(ll i=0; i<n; i++){
		cin>>v[i];
	}
	if(n<3){
		cout<<"0\n";
		for(ll i=0; i<n; i++){
			cout<<v[i]<<" ";
		}
		return 0;
	}
	sort(v.begin(), v.end());
	for(ll i=0; i<n-1; i+=2){
		swap(v[i],v[i+1]);
	}
	ll res=(n-1)/2;
	cout<<res<<"\n";
	for(ll i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
	return 0;
}