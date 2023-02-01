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

vector<ll>v(N);
ll dp[N][5][10];

ll solve(ll idx, ll n, ll cnt, ll sum){
    if(idx==n or cnt>=3){
        if(cnt==3){
            if(sum==3){
                return 1;
            }
        }
        return 0;
    }
    if(dp[idx][cnt][sum]!=-1){
        return dp[idx][cnt][sum];
    }
    ll ans1=solve(idx+1, n, cnt+1, (sum+v[idx])%10);
    ll ans2=solve(idx+1, n, cnt, sum);
    return dp[idx][cnt][sum]=ans1|ans2;
}


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        ll n;
        cin>>n;
        for(ll i=0; i<=n; i++){
            for(ll j=0; j<=5; j++){
                for(ll k=0; k<=9; k++){
                    dp[i][j][k]=-1;
                }
            }
        }
        for(ll i=0; i<n; i++){
            cin>>v[i];
            v[i]%=10;
        }
        ll ok=solve(0,n,0,0);
        yesNo(ok);
	}
	return 0;
}