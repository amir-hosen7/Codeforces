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
// ll X[] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[] = {1, 2, 2, 1, -1, -2, -2, -1};
//8 direction
// ll dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
// ll dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//4 direction
// ll dx[]={1, -1, 0, 0};
// ll dy[]={0, 0, 1, -1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	unordered_map<char, ll> mark={{'S', 1}, {'M', 2}, {'L', 3}};
	cin>>t;
	for(ll T=1; T<=t; T++){
		string a, b;
		cin>>a>>b;
		if(a==b){
			cout<<"=\n"; continue;
		}
		ll alen=a.size(), blen=b.size();
		if(mark[a[alen-1]]>mark[b[blen-1]]){
			cout<<">\n";
		}
		else if(mark[a[alen-1]]<mark[b[blen-1]]){
			cout<<"<\n";
		}
		else{
			if(a[alen-1]=='S'){
				if(alen<blen){
					cout<<">\n";
				}
				else{
					cout<<"<\n";
				}
			}
			else{
				if(alen<blen){
					cout<<"<\n";
				}
				else{
					cout<<">\n";
				}
			}
		}
	}
	return 0;
}