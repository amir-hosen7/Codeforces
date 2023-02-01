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
const ll N=3e5+50;
const ll mod=1e9+7;


ll palHr[]={0,0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
ll palMi[]={0,0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        string s;
        ll n;
        cin>>s>>n;
        ll hr=(s[0]-'0')*10+(s[1]-'0');
        ll Min=(s[3]-'0')*10+(s[4]-'0');
        unordered_map<ll,ll>Map;
        unordered_map<ll,bool>mark;
        for(ll i=1; i<=16; i++){
            Map[palHr[i]]=i;
        }
        ll ans=0;
        while(mark[Min]==false){
            mark[Min]=true;
            Min+=n;
            ll currHr=(hr+(Min/60))%24;
            ll currMi=Min%60;
            ll pos=Map[currHr];
            if(palMi[pos]==currMi and pos>0){
                ans++;
            }
            Min%=1440;
        }
        cout<<ans<<"\n";
	}
	return 0;
}