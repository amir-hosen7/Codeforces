#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define inf 1e18

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
double PI=2*acos(0.0);
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=2e5+50;
const ll mod=1e9+7;


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        ll n,H,M;
        cin>>n>>H>>M;
        ll h,m;
        map<pair<ll,ll>, bool>mark;
        for(ll i=0; i<n; i++){
            cin>>h>>m;
            mark[{h,m}]=1;
        }
        ll sleep=0;
        while(!mark[{H,M}]){
            sleep++;
            M++;
            H+=M/60;
            H%=24;
            M%=60;
            //cout<<H<<" "<<M<<" HM\n";
        }
        H=sleep/60, M=sleep%60;
        cout<<H<<" "<<M<<"\n";
	}
	return 0;
}