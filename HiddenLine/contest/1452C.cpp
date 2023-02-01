#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t; cin>>t;
	while(t--){
		string s; cin>>s;
		ll l = s.length(),fo=0,to=0,res=0;
		for(ll i=0; i<l; i++){
			if(s[i]=='('){
				fo++;
			}
			else if(s[i]=='['){
				to++;
			}
			else if(s[i]==')'){
				if(fo){
					res++; fo--;
				}
			}
			else{
				if(to){
					res++; to--;
				}
			}
		}
		cout<<res<<"\n";
	}
	
	return 0;
}