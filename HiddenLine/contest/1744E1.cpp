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
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
		ll a, b, c, d;
		cin>>a>>b>>c>>d;
		if((a*b)==1){
			cout<<a+1<<" "<<b+1<<"\n";
			continue;
		}
		map<ll, pair<bool, ll>> mark;
		for(ll i=b+1; i<=d; i++){
			ll srt=sqrt(i);
			for(ll j=1; j<=srt; j++){
				if(i%j==0){
					mark[j]={1, i}, mark[i/j]={1, i};
				}
			}
		}
		ll div=a*b, x=-1, y=-1;
		for(ll i=a+1; i<=c and x==-1; i++){
			ll srt=sqrt(i);
			for(ll j=1; j<=srt; j++){
				if(i%j==0){
					if(div%j==0 and mark[div/j].F){
						//cout<<i<<" "<<mark[div/j].S<<" ck\n";
						x=i, y=mark[div/j].S;
						break;
					}
					ll temp=i/j;
					if(div%temp==0 and mark[div/temp].F){
						//cout<<i<<" "<<mark[div/j].S<<" ck2\n";
						x=i, y=mark[div/temp].S;
						break;
					}
				}
			}
		}
		cout<<x<<" "<<y<<"\n";
	}
	return 0;
}