#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
#include<cmath>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define F false
#define T true
#define inf 1e18;
#define in(n) cin>>n
#define iin(n, m) cin>>n>>m
#define iiin(a,b,c) cin>>a>>b>>c
#define O(a) cout<<a
#define prln(a) cout<<a<<"\n"
#define OO(a, b) cout<<a<<b
#define nl cout<<"\n"
#define sp cout<<" "

using namespace std;
const int N=1e5+50;
const int mod=1e9+7;

void calc1(ll n0, ll n1, ll n2){
	//cout<<n0<<" "<<n1<<" "<<n2<<"\n";
	string res;
	while(n0>=0){
		res+="0"; n0--;
	}
	ll cnt=1;
	while(n1>0){
		if(cnt%2==1){
			res+="1";
		}
		else{
			res+="0";
		}
		cnt++; n1--;
	}
	while(n2>0){
		res+="1"; n2--;
	}
	prln(res);
}

void calc2(ll n0, ll n1, ll n2){
	string res;
	if(n1==0){
		if(n0>0){
			while(n0>=0){
				res+="0"; n0--;
			}
		}
		if(n2>0){
			while(n2>=0){
				res+="1"; n2--;
			}
		}
		prln(res);
		return;
	}
	res += "1"; n1--;
	while(n0>=0){
		res+="0"; n0--;
	}
	ll cnt=0;
	while(n1>0){
		if(cnt%2==0){
			res+="1";
		}
		else{
			res+="0";
		}
		cnt++; n1--;
	}
	while(n2>0){
		res+="1"; n2--;
	}
	prln(res);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; in(tc);
	for(ll t=1; t<=tc; t++){
		ll n0,n1,n2; iiin(n0,n1,n2);
		if(n1%2==1){
			calc1(n0,n1,n2);
		}
		else{
			calc2(n0,n1,n2);
		}
	}
	return 0;
}