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


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; in(tc);
	for(ll t=1; t<=tc; t++){
		ll n; in(n);
		if(n<4){
			cout<<"-1\n"; continue;
		}
		ll tmp=n;
		if(tmp%2==0){
			tmp=n-1;
		}
		vector<ll> res;
		while(tmp>0){
			res.pb(tmp);
			tmp-=2;
		}
		res.pb(4); res.pb(2);
		tmp=4;
		if(n%2==1){
			n--;
		}
		while(tmp<n){
			tmp+=2;
			res.pb(tmp);
		}
		ll len = res.size();
		for(ll i=0; i<len; i++){
			O(res[i]); sp;
		}nl;
	}
	return 0;
}