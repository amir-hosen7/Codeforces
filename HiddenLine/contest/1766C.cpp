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

ll col;
string s[2];
ll dp[2][2][N];

ll solve(ll status, ll r, ll c) {
    //cout << r << " " << c << "\n";
    if (r >= 2 or c >= col) return 0;
    ll &ret = dp[status][r][c];
    if (ret != -1) return ret;
    ll ans = 0;
    if (r == 0) {
        ll ans1 = 0, ans2 = 0;
        if (s[r + 1][c] == 'B' and !status) {
            ans1 = 1 + solve(1, r + 1, c);
        }
        if (c < (col - 1) and s[r][c + 1] == 'B') {
            ans2 = 1 + solve(0, r, c + 1);
        }
        ans = max(ans1, ans2);
    }
    else{
        ll ans1 = 0, ans2 = 0;
        if (s[r - 1][c] == 'B' and !status) {
            ans1 = 1 + solve(1, r - 1, c);
        }
        if (c < (col - 1) and s[r][c + 1] == 'B') {
            ans2 = 1 + solve(0, r, c + 1);
        }
        ans = max(ans1, ans2);
    }
    return ret = ans;
}

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    ll t = 1;
    cin >> t;
    for (ll T = 1; T <= t; T++) {
        cin >> col;
        cin >> s[0] >> s[1];
        ll black = 0, res = 0;
        for (ll i = 0; i < 2; i++) {
            bool flag = 0;
            for (ll j = 0; j < col; j++) {
                if (s[i][j] == 'B') {
                    if (!flag) {
                        //cout << i << " " << j << "\n";
                        flag = 1;
                        for (ll ii = 0; ii < 2; ii++) {
                            for (ll jj = 0; jj < 2; jj++) {
                                for (ll k = 0; k < col; k++) {
                                    dp[ii][jj][k] = -1;
                                }
                            }
                        }
                        res = max(res, 1 + solve(0, i, j));
                    }
                    black++;
                }
            }
        }
        yesNo(res == black);
    }
    return 0;
}