#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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

string bigSub(string a, string b){
	reverse(all(a)); reverse(all(b));
	ll alen=a.size(), blen=b.size();
	ll sz=min(alen,blen), carry=0, idx=0;
	vector<ll>res(N);
	for(ll i=0; i<sz; i++){
		ll x=a[i]-'0', y=b[i]-'0'+carry;
		carry=0;
		if(x<y){x+=10;carry=1;}
		res[idx++]=x-y;
	}
	if(alen<blen){
		a=b; alen=blen;
	}
	for(ll i=sz; i<alen; i++){
		ll x=a[i]-'0', y=carry;
		carry=0;
		if(x<y){x+=10; carry=1;}
		res[idx++]=x-y;
	}
	if(res[idx-1]==0){idx--;}
	string ans;
	for(ll i=idx-1; i>=0; i--){
		ans+=res[i]+'0';
	}
	return ans;
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++) {
		ll n;
		cin>>n;
		string s;
		cin>>s;
		if(s[0]=='9'){
			string num;
			for(ll i=0; i<(n+1); i++){
				num+='1';
			}
			string ans=bigSub(num, s);
			cout<<ans<<"\n";
		}
		else{
			ll L=0, R=n-1;
			vector<ll>ans(n+5, 0);
			s[0]++;
			//cout<<s<<"\n";
			while(L<R){
				if(s[L]!=s[R]){
					ll a=s[L]-'0',b=s[R]-'0';
					if(a>b){
						ans[R]=a-b;
					}
					else{
						ans[L]=b-a;
					}
				}
				L++, R--;
			}
			ans[0]++;
			for(ll i=0; i<n; i++){
				cout<<ans[i];
			}
			cout<<"\n";
		}
	}
	return 0;
}