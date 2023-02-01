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
		string s; in(s);
		ll len = s.length(), cnt = 0, kotobar=0;
		string ans;
		for(ll i=len-1; i>=0; i--){
			if(s[i] != '0'){
				ans+=s[i];
				for(ll j=0; j<cnt; j++){
					ans+="0";
				}
				ans+=" ";
				kotobar++;
			}
			cnt++;
		}
		cout<<kotobar<<"\n"<<ans<<"\n";
	}
	return 0;
}