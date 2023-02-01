#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		string s; 
		cin>>s;
		ll cnt=0,ck=0;
		for(ll i=0; i<n; i++){
			if((i+1)%2==1 and (s[i]-'0')%2==1){
				cnt++;
			}
			else if((i+1)%2==0 and (s[i]-'0')%2==1){
				ck++;
			}
		}
		if((cnt>0 and n%2==1) or (n%2==0 and ck==n/2)){
			cout<<"1\n";
		}
		else{
			cout<<"2\n";
		}
	}
}