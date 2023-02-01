#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
#include<math.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e5+50;
const int mod=1e9+7;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	vector<ll> dp;
		ll a = 1;
		for(ll i=1; i<=32; i++){
			a += powl(2,i);
			dp.pb(a);
		}
	ll tc=1; cin>>tc;
	for(ll T=1; T<=tc;T++){
		ll n; cin>>n;
		ll ans;
		for(ll i=0; i<32; i++){
			if(n%dp[i] == 0){
				ans = n/dp[i];
				break;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}