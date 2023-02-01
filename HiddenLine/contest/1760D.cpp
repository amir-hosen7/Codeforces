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

//typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

ll removeDup(vector<ll> &v){
    ll n=v.size(), idx=1;
    for(ll i=1; i<n; i++){
        if(v[i-1]!=v[i]){
            v[idx++]=v[i];
        }
    }
    return idx;
}


int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t=1;
    cin>>t;
    for(ll T=1; T<=t; T++){
        ll n;
        cin>>n;
        vector<ll> v(n+2);
        v[0]=INT_MAX;
        for(ll i=1; i<=n; i++){
            cin>>v[i];
        }
        v[n+1]=INT_MAX;
        ll idx=removeDup(v), ok=0;
        for(ll i=1; i<(idx-1); i++){
            if(v[i]<v[i-1] and v[i]<v[i+1]){
                ok++;
            }
        }
        yesNo(ok==1);
    }
    return 0;
}