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
const ll N=2e6+50;
const ll mod=1e9+7;


int main(){

	//freopen("C:/Users/Aman/Documents/output.txt", "w", stdout);
	//freopen("C:/Users/Aman/Documents/input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n,m,x;
		cin>>n>>m>>x;
		vector<pair<ll,ll>>v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i].F;
			v[i].S=i+1;
		}
		if(n==1 and v[0].F>x){
			cout<<"NO\n"; continue;
		}
		sort(all(v));
		reverse(all(v));
		set<pair<ll,ll>>st;
		for(ll i=1; i<=m; i++){
			st.insert({0,i});
		}
		unordered_map<ll,ll>res;
		for(ll i=0; i<n; i++){
			auto it=st.begin();
			ll aa=it->F+v[i].F;
			ll idx=it->S;
			//cout<<idx<<"\n";
			res[v[i].S]=idx;
			st.erase(it);
			st.insert({aa,idx});
		}
		auto First=st.begin();
		auto last=st.end();
		last--;
		//cout<<First->F<<" "<<last->F<<"\n";
		if((last->F-First->F)>x){
			cout<<"NO\n";
		}
		else{
			cout<<"YES\n";
			for(ll i=1; i<=n; i++){
				cout<<res[i]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}