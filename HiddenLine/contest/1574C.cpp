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
const ll N=2e6+50;
const ll mod=1e9+7;


int main(){

	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; 
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		ll SUM=0;
		vector<ll>v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
			SUM+=v[i];
		}
		sort(all(v));
		ll m,x,y; cin>>m;
		while(m--){
			cin>>x>>y;
			ll idx=upper_bound(all(v),x)-v.begin();
			ll sum=SUM,res=0;
			if(idx==n){
				idx--;
				res+=(x-v[idx]);
				sum-=v[idx];
				if(y>sum){
					res+=(y-sum);
				}
			}
			else{
				sum-=v[idx];
				if(y>sum){
					res+=(y-sum);
				}
				idx--;
				sum=SUM;
				if(idx>=0){
					ll temp_res;;
					sum-=v[idx];
					temp_res=(x-v[idx]);
					if(y>sum){
						temp_res+=(y-sum);
					}
					res=min(res,temp_res);
				}
			}
			cout<<res<<"\n";
		}
	}
	return 0;
}