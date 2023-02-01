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
//typedef tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		string s;
		cin>>s;
		ll n;
		cin>>n;
		string list[n+5];
		for(ll i=0; i<n; i++){
			cin>>list[i];
		}
		vector<vector<ll>>ans;
		ll len=s.size(), idx=-1, flag=1;
		while(idx<len){
			ll curr=idx+1, mx=0, L, pos;
			while(curr>=0){
				for(ll i=0; i<n; i++){
					ll k=curr, ok=1;
					for(auto j:list[i]){
						if(k==len or s[k]!=j){
							ok=0; break;
						}
						if(s[k]==j) k++;
					}
					if(ok){
						ll siz=list[i].size() - (idx-curr+1);
						if(mx<siz){
							mx=siz;
							L=i+1;
							pos=curr+1;
						}
					}
				}
				//cout<<mx<<" "<<L<<" "<<pos<<" fahim\n";
				curr--;
			}
			if(mx==0){
				flag=0; break;
			}
			idx+=mx;
			ans.pb({L, pos});
			if(idx==(len-1)) break;
			//cout<<idx<<" idx\n";
		}
		if(idx!=(len-1)) flag=0;
		if(flag){
			ll siz=ans.size();
			cout<<siz<<"\n";
			for(ll i=0; i<siz; i++){
				cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
			}
		}
		else cout<<"-1\n";
	}
	return 0;
}