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
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=2e5+50;
const ll mod=1e9+7;


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        ll n;
        cin>>n;
        vector<ll>ans(n+5);
        for(ll i=1; i<n; i+=2){
            ans[i]=i+1;
            ans[i+1]=i;
        }
        if(n%2){
            ans[n]=1;
            ans[2]=n;
        }
        for(ll i=1; i<=n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
	}
	return 0;
}