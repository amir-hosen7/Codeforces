#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t; cin>>t;
	ll n;
	for(ll T=1; T<=t; T++){
		cin>>n;
		if(n%3==0){
			cout<<n/3<<" 0 0\n";
		}
		else if(n%5==0){
			cout<<"0 "<<n/5<<" 0\n";
		}
		else if(n%7==0){
			cout<<"0 0 "<<n/7<<"\n";
		}
		else{
			if(n>5){
				ll aa = n;
				aa -= 5;
				if(aa%3==0 and aa>0){
					cout<<aa/3<<" 1 0\n";
					continue;
				}
				n -= 7;
				if(n%3==0 and n>0){
					cout<<n/3<<" 0 1\n";
					continue;
				}
			}
			cout<<"-1\n";
		}
	}
	return 0;
}