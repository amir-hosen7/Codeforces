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
		string s; in(s);
		ll len = s.length();
		ll ar[5]={0};
		rep(i,0,len){
			ll aa = s[i]-'0';
			ar[aa]++;
		}
		if(!ar[1] or !ar[2] or !ar[3]){
			prln(0); continue;
		}
		ar[1]=ar[2]=ar[3]=0;
		ll L=0, R=0, res=inf;
		while(R<len){
			while((!ar[1] or !ar[2] or !ar[3]) and R<len){
				ll aa = s[R++]-'0';
				ar[aa]++;
			}
			while(ar[1] and ar[2] and ar[3] and L<len){
				ll aa=s[L++]-'0';
				ar[aa]--;
			}
			//OO(R,L);nl;
			res = min(res, R-L+1);
		}
		prln(res);
	}
	return 0;
}