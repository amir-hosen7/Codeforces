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
bool isVowel(char ch){ch=toupper(ch);if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E'){return true;}return false;}
bool isCons(char ch){if(isalpha(ch) && !isVowel(ch)){return true;} return false;}

//------------------------------------------------------------------------------//

const ll p=29;
const ll N=2e6+50;
const ll mod=1e9+7;


int main(){

	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		vector<ll>v(7),a,b;
		for(ll i=0; i<7; i++){
			cin>>v[i];
		}
		ll ok=0;
		for(ll i=0; i<7 and ok==0; i++){
			for(ll j=i+1; j<7 and ok==0; j++){
				for(ll k=j+1; k<7; k++){
					if((v[i]+v[j]+v[k])==v[6]){
						a.pb(v[i]); a.pb(v[j]); a.pb(v[k]); 
						ok=1; break;
					}
				}
			}
		}
		do{
			b.clear();
			b.pb(a[0]); b.pb(a[1]); b.pb(a[2]);
			b.pb(a[0]+a[1]); b.pb(a[0]+a[2]);
			b.pb(a[1]+a[2]); b.pb(v[6]);
			sort(all(b));
			if(v==b){
				break;
			}
		}while(next_permutation(a.begin(),a.end()));
		for(ll i=0; i<3; i++){
			cout<<a[i]<<" ";
		}cout<<"\n";
	}
	return 0;
}