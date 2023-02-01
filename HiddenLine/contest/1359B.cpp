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
#define rep(i,a,b) for(ll i=a; i<b; i++)

using namespace std;
const int N=1e5+50;
const int mod=1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; in(tc);
	for(ll t=1; t<=tc; t++){
		ll n,m,x,y;
		iin(n,m); iin(x,y);
		if((2*x)<y){
			y=2*x;
		}
		string s;
		ll cnt,res=0;
		rep(i,0,n){
			in(s);
			cnt=0;
			rep(j,0,m){
				if(s[j]=='.'){
					cnt++;
				}
				else{
					if(cnt==1){
						res+=x; cnt=0;
					}
				}
				if(cnt==2){
					res+=y; cnt=0;
				}
			}
			if(cnt==1){
				res+=x;
			}
		}
		prln(res);
	}
	return 0;
}