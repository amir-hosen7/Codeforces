#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define Mid(b, e) b + (e - b) / 2
#define inf 1e18
double PI = 2 * acos(0.0);

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
void yesNo(bool ck){cout << (ck ? "YES\n" : "NO\n");}
//------------------------------------------------------------------------------//

//ll toInt(string s){stringstream ss;ss<<s;int n;ss>>n;return n;}
//string toString(ll n){stringstream ss;ss<<n;string s;ss>>s;return s;}
//typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;


const ll P = 29;
const ll N = 2e5 + 50;
const ll mod = 1e9 + 7;

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t = 1;
    cin >> t;
    for (ll T = 1; T <= t; T++) {
        ll n;
        cin >> n;
        vector<ll> par(n + 5);
        for (ll i = 1; i <= n; i++) {
            par[i] = -1;
        }
        vector<ll> v[n+5];
        for (ll i = 1; i <= n; i++) {
            v[i].pb(0);
            ll a;
            for (ll j = 1; j < n; j++) {
                cin >> a;
                v[i].pb(a);
            }
            for (ll j = n - 1; j >= 2; j--) {
                if (par[v[i][j]] == -1) {
                    par[v[i][j]] = v[i][j - 1];
                }
            }
        }
        ll curr;
        for (ll j = 1; j <= n; j++) {
            if (par[j] == -1) {
                curr = j;
                break;
            }
        }
        for (ll i = 1; i <= n; i++) {
            if (v[i][1] != curr) {
                cout << curr << " ";
                for (ll j = 1; j <= n - 1; j++) {
                    cout << v[i][j] << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}