#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 2147483647
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS

//knight moves
//ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 	
//ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1}; 
//ll dx[]={1,-1,0,0};
//ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
ll toInt(string s){stringstream ss;ss<<s;int n;ss>>n;return n;}
string toString(ll n){stringstream ss;ss<<n;string s;ss>>s;return s;}
string UPPER(string s){transform(all(s),s.begin(),::toupper);return s;}
string LOWER(string s){transform(all(s),s.begin(),::tolower);return s;}
bool isDigit(char ch){if(ch>=48 && ch<=57) return true; else return false;}
vector<ll>removeDup(vector<ll>v){sort(all(v)); v.resize(distance(v.begin(),unique(all(v))));return v;}
bool isVowel(char ch){ch=toupper(ch);if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E'){return true;}return false;}
bool isCons(char ch){if(isalpha(ch) && !isVowel(ch)){return true;} return false;}

//------------------------------------------------------------------------------//

const ll p=29;
const ll N=2e5+50;
const ll mod=1e9+7;

unordered_map<ll,ll>mp;
vector<ll>A,B,tree(N*3);
void build(ll node, ll b, ll e){
	if(b==e){
		//cout<<A[b]<<" "<<mp[A[b]]<<"\n";
		tree[node] = mp[A[b]];
		//cout<<b<<" "<<tree[node]<<"\n";
		return;
	}
	ll mid = (b+e)/2;
	build(node*2,b,mid);
	build(node*2+1,mid+1,e);
	tree[node] = min(tree[node*2], tree[node*2+1]);
	//cout<<tree[node]<<"\n";
}

ll query(ll node, ll b, ll e, ll l, ll r){
	if(b>r or e<l or b>e){
		return inf;
	}
	if(b>=l and e<=r){
		return tree[node];
	}
	ll mid=(b+e)/2;
	return min(query(node*2,b,mid,l,r), query(node*2+1,mid+1,e,l,r));
}


int main(){

	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		A.resize(n);
		B.resize(n);
		for(ll i=0; i<n; i++){
			cin>>A[i];
			//cout<<A[i]<<" ";
			mp[A[i]]=i;
		}
		for(ll i=0; i<n; i++){
			cin>>B[i];
		}
		sort(all(A));
		build(1,0,n-1);
		ll res=inf;
		for(ll i=0; i<n; i++){
			ll idx = lower_bound(all(A), B[i]) - A.begin();
			ll Q = query(1,0,n-1,0,idx-1);
			//cout<<Q<<"\n";
			res = min(res, i+Q);
		}
		cout<<res<<"\n";
		A.clear();
		B.clear();
		mp.clear();
	}
	return 0;
}