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

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll n;
		cin>>n;
		vector<ll> ss(30, 0), tt(30, 0);
		ss[1]=1, tt[1]=1;
		ll totS=1, totT=1;
		char ch='a';
		for(ll i=0; i<n; i++){
			ll type, k;
			string x;
			cin>>type>>k>>x;
			if(type==1){
				ll siz=x.size();
				totS+=(siz*k);
				for(ll j=0; j<siz; j++){
					ll id=x[j]-'a'+1;
					ss[id]+=k;
				}
			}
			else{
				ll siz=x.size();
				totT+=(siz*k);
				for(ll j=0; j<siz; j++){
					ch=max(ch, x[j]);
					ll id=x[j]-'a'+1;
					tt[id]+=k;
				}
			}
			if(ch>'a'){
				cout<<"YES\n";
				continue;
			}
			ll ok=0, A=totS, B=totT;
			for(ll j=1; j<=26; j++){
				if((ss[j]>tt[j] and B>=A) or (A==ss[j] and A<B)){
					ok=1; break;
				}
				if(ss[j]<tt[j]){
					break;
				}
				A-=ss[j];
				B-=tt[j];
			}
			yesNo(ok);
		}
	}
	return 0;
}