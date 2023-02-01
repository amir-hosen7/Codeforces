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
#define I(n) cin>>n
#define II(n, m) cin>>n>>m
#define III(a,b,c) cin>>a>>b>>c
#define O(a) cout<<a
#define OO(a, b) cout<<a<<b
#define nl cout<<"\n"
#define sp cout<<" "

using namespace std;
const int N=1e5+50;
const int mod=1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; I(tc);
	for(ll t=1; t<=tc;t++){
		ll n; I(n);
		ll idx = 1;
		ll a=pow(2, n-1), b=pow(2,n);
		n-=2;
		while(idx<n){
			b += pow(2,idx);
			idx++;
			a += pow(2,n);
			n--;
		}
		O(abs(a-b)); nl;
	}
	return 0;
}