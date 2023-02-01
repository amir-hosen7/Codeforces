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

ll n,ok;
bool vis[2][105];
string s[3];
ll dx[]={-1,-1,0,1,1};
ll dy[]={0,1,1,1,0};

bool isValid(ll x, ll y){
	return (x>=0 and x<2 and y>=0 and y<n);
}

bool solve(ll x, ll y){
	for(ll i=0; i<5; i++){
		ll xx=x+dx[i], yy=y+dy[i];
		if(isValid(xx,yy)==true){
			if(s[xx][yy]=='0' and vis[xx][yy]==false){
				vis[xx][yy]=true;
				if(xx==1 and yy==(n-1)){
					ok=1; break;
				}
				solve(xx,yy);
			}
		}
	}
	return (ok==1)?true:false;
}


int main(){

	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		memset(vis,false,sizeof(vis));
		cin>>n;
		ok=0;
		for(ll i=0; i<2; i++){
			cin>>s[i];
		}
		yesNo(solve(0,0));
	}
	return 0;
}