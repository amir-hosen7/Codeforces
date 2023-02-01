#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll>getDiv(ll a){
	ll sq=sqrt(a);
	vector<ll>v;
	for(ll i=1;i<=sq;i++){
		if(a%i==0){
			v.push_back(i);
			v.push_back(a/i);
		}
	}
	return v;
}
 
int main(){
	ll t=1;
	cin>>t;
	for(ll T=1;T<=t;T++){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		vector<ll>div1=getDiv(a);
		vector<ll>div2=getDiv(b);
		vector<ll>div;
		for(ll i=0;i<div1.size();i++)div.push_back(div1[i]);
		for(ll i=0;i<div2.size();i++)div.push_back(div2[i]);
		for(ll i=0;i<div1.size();i++){
			for(ll j=0;j<div2.size();j++){
				div.push_back(div1[i]*div2[j]);
			}
		}
		ll x=-1,y=-1;
		for(ll i=0;i<div.size();i++){
			ll p=div[i];
			ll q=(a*b)/p;
			ll tmpx=((a/p)+1)*p;
			ll tmpy=((b/q)+1)*q;
			if(tmpx<=c&&tmpy<=d){
				x=tmpx;
				y=tmpy;
				break;
			}
		}
		cout<<x<<" "<<y<<endl;
	}
	return 0;
}