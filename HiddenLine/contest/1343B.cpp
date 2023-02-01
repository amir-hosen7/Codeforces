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
	ll tc=1; cin>>tc;
	for(ll T=1; T<=tc;T++){
		ll n; cin>>n;
		if((n/2)%2){
			cout<<"No\n";
		}
		else{
			cout<<"Yes\n";
			vector<ll> ans;
			ll e = 2, sum = 2;
			ans.pb(e);
			for(ll i=1; i<=(n/2)-1; i++){
				e += 2;
				ans.pb(e);
				sum += e;
			}
			ll o=1, sum2=1;
			ans.pb(o);
			for(ll i=1; i<=(n/2)-2; i++){
				o += 2;
				sum2 += o;
				ans.pb(o);
			}
			ans.pb(sum-sum2);
			for(ll i=0; i<n; i++){
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}