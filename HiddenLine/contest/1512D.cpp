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
		vector<ll>v(n+2);
		ll add=0,sum,x,ok=0;
		for(ll i=0; i<(n+2); i++){
			cin>>v[i]; add+=v[i];
		}
		sort(all(v));
		reverse(all(v));
		add-=v[0];
		sum=v[0];
		for(ll i=1; i<(n+2); i++){
			if((add-v[i])==v[0]){
				x=v[i];
				ok=1; break;
			}
		}
		if(ok==0){
			x=v[0];
			sum=v[1];
			add-=v[1];
			if(add==sum){
				ok=1;
			}

		}
		if(ok==0){
			cout<<"-1\n";
			continue;
		}
		ll ck=0,ck2=0;
		for(ll i=0; i<(n+2); i++){
			if(v[i]==sum and ck==0){
				ck=1;
			}
			else if(v[i]==x and ck2==0){
				ck2=1;
			}
			else{
				cout<<v[i]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}