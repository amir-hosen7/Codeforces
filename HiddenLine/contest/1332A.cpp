#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e5+50;
const int mod=1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; cin>>tc;
	for(ll T=1; T<=tc;T++){
		ll a,b,c,d; cin>>a>>b>>c>>d;
		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;
		if((x==x1 and x==x2 and (a+b))
		or (y==y1 and y==y2 and (c+d))){
			cout<<"no\n"; continue;
		}
		b = b-a+x;
		d = d-c+y;
		if(b>=x1 and b<=x2 and d>=y1 and d<=y2){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
	}
	return 0;
}