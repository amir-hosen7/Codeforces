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
	ll tc=1;
	for(ll t=1; t<=tc; t++){
		ll k; in(k);
		string s; in(s);
		ll len=s.length(), sum=0;
		ll ar[10]={0}, aa;
		for(ll i=0; i<len; i++){
			aa = s[i]-'0';
			sum+=aa;
			ar[aa]++;
		}
		ll res=0;
		if(sum<k){
			ll cur_sum=0, tmp, ok=0;
			for(ll i=0; i<=8; i++){
				len = ar[i];
				for(ll j=1; j<=len; j++){
					res++;
					cur_sum+=i;
					tmp = 9*res+(sum-cur_sum);
					if(tmp>=k){
						ok=1;
						break;
					}
				}
				if(ok){
					break;
				}
			}
		}
		prln(res);
	}
	return 0;
}