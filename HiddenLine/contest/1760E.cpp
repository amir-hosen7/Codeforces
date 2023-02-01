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

ll n;
vector<ll>Tree(N);
void update(ll idx, ll val){
    while(idx<=n){
        Tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

ll getSum(ll idx){
    ll sum=0;
    while(idx>0){
        sum+=Tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}


int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t=1;
    cin>>t;
    for(ll T=1; T<=t; T++){
        cin>>n;
        for(ll i=0; i<=n; i++){
            Tree[i]=0;
        }
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
            v[i];
        }
        ll cntInv=0, R=0;
        for(ll i=0; i<n; i++){
            R=max(R,v[i]+1);
            ll A=getSum(R), B=getSum(v[i]+1);
            cntInv+=(A-B);
            update(v[i]+1, 1);
        }
        ll res=cntInv, idx=-1;
        for(ll i=0; i<n; i++){
            if(v[i]==0){
                v[i]=1;
                idx=i; break;
            }
        }
        for(ll i=0; i<=n; i++){
            Tree[i]=0;
        }
        cntInv=0, R=0;
        for(ll i=0; i<n; i++){
            R=max(R, v[i]+1);
            ll A=getSum(R), B=getSum(v[i]+1);
            cntInv+=(A-B);
            update(v[i]+1, 1);
        }
        res=max(res, cntInv);
        if(idx!=-1) v[idx]=0;
        for(ll i=n-1; i>=0; i--){
            if(v[i]==1){
                v[i]=0; break;
            }
        }
        for(ll i=0; i<=n; i++){
            Tree[i]=0;
        }
        cntInv=0, R=0;
        for(ll i=0; i<n; i++){
            R=max(R, v[i]+1);
            ll A=getSum(R), B=getSum(v[i]+1);
            cntInv+=(A-B);
            update(v[i]+1, 1);
        }
        res=max(res, cntInv);
        cout<<res<<"\n";
    }
    return 0;
}