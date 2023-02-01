#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "Yes\n":"No\n");}
//typedef tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>pbds;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>pbds;
//typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>pbds;

//------------------------------------------------------------------------------//


const ll P=29;
const ll N=2e5+50;
const ll mod=1e9+7;

bool vis[N];
vector<ll>status(N);
vector<ll>adj[N],ans;

void dfs(ll root){
    vis[root]=1;
    if(status[root]){
        bool ok=1;
        for(auto i:adj[root]){
            if(!status[i] and !vis[i]){
                ok=0; break;
            }
        }
        if(ok){
            ans.pb(root);
        }
    }
    for(auto i:adj[root]){
        if(!vis[i]){
            dfs(i);
        }
    }
}



int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	for(ll T=1; T<=t; T++){
        ll node,root,p,c;
        cin>>node;
        for(ll i=1; i<=node; i++){
            cin>>p>>c;
            if(p==-1){
                root=i; continue;
            }
            adj[p].pb(i);
            adj[i].pb(p);
            status[i]=c;
        }
        dfs(root);
        if(ans.size()==0){
            cout<<"-1\n";
        }
        else{
            sort(all(ans));
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
	}
	return 0;
}