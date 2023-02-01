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
		ll n; cin>>n;
		ll res[n+5];
		vector<ll>A[n+5];
		set<ll>st;
		vector<ll>u(n);
		for(ll i=0; i<n; i++){
			cin>>u[i];
			st.insert(u[i]);
			res[i+1]=0;
		}
		ll aa;
		for(ll i=0; i<n; i++){
			cin>>aa;
			A[u[i]].pb(aa);
		}
		ll cum[n+5];
		for(auto it:st){
			sort(all(A[it]));
			reverse(all(A[it]));
			ll siz=A[it].size(),sum=0,idx=0;
			for(auto i:A[it]){
				sum+=i; cum[idx++]=sum;
			}
			for(ll i=1; i<=siz; i++){
				idx=(siz/i)*i;
				res[i]+=cum[idx-1];
			}
		}
		
		for(ll i=1; i<=n; i++){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}