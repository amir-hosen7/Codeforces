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
    //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    vector<ll> res[1000];
    ll idx = 1;
    for (ll i = 5; i < 1000; i += 2) {
        vector <ll> v;
        for (ll j = 1; j <= i; j++) {
            if (j % 2) v.pb(-idx);
            else v.pb(idx + 1);
        }
        res[i] = v;
        idx++;
    }

    ll t = 1;
    cin >> t;
    for (ll T = 1; T <= t; T++) {
        ll n;
        cin >> n;
        if (n == 3) {
            cout << "NO\n"; continue;
        }
        cout << "YES\n";
        if (n % 2) {
            for (ll i = 0; i < n; i++) {
                cout << res[n][i] << " ";
            }
        }
        else {
            for (ll i = 1; i <= n; i++) {
                if (i % 2) cout << "1 ";
                else cout << "-1 ";
            }
        }
        cout << "\n";
    }
    return 0;
}