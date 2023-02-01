#include<bits/stdc++.h>
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
//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;


ll n,logn[N];
vector<ll>v;
ll table[22][N];

void build_sparse_table(){
	logn[1]=0;
	for(ll i=2; i<=n; i++){
		logn[i]=logn[i/2]+1;
	}
	for(ll i=0; i<=logn[n]; i++){
		ll curr_len=(1<<i); //2^i
		for(ll j=0; (j+curr_len)<=n; j++){
			if(curr_len==1){
				table[i][j]=v[j];	//table[i][j],i=2^i elements,j=start pont
			}
			else{
				table[i][j]=max(table[i-1][j], table[i-1][j+(curr_len/2)]);
			}
		}
	}
}

ll get_max(ll L,ll R){
	ll p=logn[R-L+1];
	ll len=1<<p;	//2^p
	return max(table[p][L], table[p][R-len+1]);
}

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll q;
		cin>>n>>q;
		v.resize(n);
		vector<ll> cum(n+1);
		cum[0]=0;
		for(ll i=0; i<n; i++){
			cin>>v[i];
			cum[i+1]=cum[i]+v[i];
		}
		build_sparse_table();
		while(q--){
			ll k;
			cin>>k;
			ll L=0, R=n-1, idx=0;
			while(L<=R){
				ll mid=L+(R-L)/2;
				if(get_max(0, mid)>k){
					R=mid-1;
				}
				else{
					idx=mid+1;
					L=mid+1;
				}
			}
			cout<<cum[idx]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}