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

ll gcd(ll a, ll b){
    if(a==0){return b;}
    return gcd(b%a,a);
}


int main(){

	//freopen("C:/Users/Aman/Documents/output.txt", "w", stdout);
	//freopen("C:/Users/Aman/Documents/input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		vector<ll>v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		ll L[n+5],R[n+5],X[n+5],Y[n+5],idx=0;
		for(ll i=0; i<(n-1); i++){
			if(__gcd(v[i],v[i+1])>1){
				if(min(v[i],v[i+1])==v[i+1]){
					if(i==0){
						v[i]=v[i+1]+1;
					}
					else{
						ll temp=v[i+1];
						while(__gcd(v[i-1],temp)>1 or __gcd(v[i+1],temp)>1){
							temp++;
						}
						v[i]=temp;
					}
					
				}
				else{
					if(i==(n-2)){
						v[i+1]=v[i]+1;
					}
					else{
						ll temp=v[i+1];
						while(__gcd(v[i+2],temp)>1 or __gcd(v[i],temp)>1){
							temp++;
						}
						v[i+1]=temp;
					}
				}
				L[idx]=i+1, R[idx]=i+2;
				X[idx]=v[i], Y[idx]=v[i+1];
				idx++;
			}
		}
		cout<<idx<<"\n";
		for(ll i=0; i<idx; i++){
			cout<<L[i]<<" "<<R[i]<<" "<<X[i]<<" "<<Y[i]<<"\n";
		}
	}
	return 0;
}