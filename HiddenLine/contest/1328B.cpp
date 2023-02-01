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
using namespace std;
const int N=2e9;
const int mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<ll>v; map<int,int>m;
	ll cnt = 1, idx = 0, x = 1;
	while(1){
		cnt += idx;
		if(cnt > N) break;
		v.pb(cnt); m[cnt] = x++;
		idx++;
	}
	ll tc=1; cin>>tc;
	for(ll T=1; T<=tc;T++){
		ll n, k; cin>>n>>k;
		ll lb = lower_bound(v.begin(), v.end(),k) 
		                                  - v.begin();
		if(v[lb] != k){
			lb--;
		}
		ll ff = n - m[v[lb]];
		x = k - v[lb];
		ll ss = n - x;
		for(ll i=1; i<=n; i++){
			if(i == ff or i == ss){
				cout<<"b";
			}
			else{
				cout<<"a";
			}
		}
		cout<<"\n";
	}
	return 0;
}