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


const ll P = 29;
const ll N = 2e5 + 50;
const ll mod = 1e9 + 7;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t = 1;
    cin >> t;
    for (ll T = 1; T <= t; T++) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        unordered_map<ll, ll> cnt;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            cnt[v[i]]++;
        }
        if (n == 1) {
            cout << "1 1\n"; continue;
        }
        ll L = 0;
        while (L < n) {
            if (cnt[v[L]] > 1) break;
            L++;
        }
        ll R = n - 1;
        while (R > L) {
            if (cnt[v[R]] > 1) break;
            R--;
        }
        L = min(L, n - 1);
        cout << L + 1 << " " << R + 1 << "\n";
    }
    return 0;
}