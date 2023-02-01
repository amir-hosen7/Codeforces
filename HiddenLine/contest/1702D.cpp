#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 1e18
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//typedef tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>pbds;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>pbds;
//typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>pbds;

//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e6+50;
const ll mod=1e9+7;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		string w;
		ll p;
		cin>>w>>p;
		ll n=w.size(),sum=0;
		vector<ll>cnt(30, 0);
		for(ll i=0; i<n; i++){
			ll id=w[i]-'a'+1;
			cnt[id]++;
			sum+=id;
		}
		vector<ll>dlt(30, 0), have=cnt;
		for(ll i=26; i>=1; i--){
			while(sum>p and cnt[i]){
				dlt[i]++;
				sum-=i, cnt[i]--;
			}
		}
		for(ll i=1; i<=26; i++){
			//cout<<i<<" "<<have[i]<<" "<<dlt[i]<<"\n";
			have[i]-=dlt[i];
		}
		string ans;
		cnt.clear();
		cnt.resize(30, 0);
		for(ll i=0; i<n; i++){
			ll id=w[i]-'a'+1;
			//cout<<id<<" "<<cnt[id]<<" "<<have[id]<<"\n";
			if(cnt[id]<have[id]){
				ans+=w[i];
				cnt[id]++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}