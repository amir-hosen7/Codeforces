#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t = 1;
    cin >> t;
    for (ll T = 1; T <= t; T++) {
        string s;
        cin >> s;
        ll n = s.size(), cnt = 0;
        string str = "3141592653589793238462643383279";
        for (ll i = 0; i < n; i++) {
            if (s[i] == str[i]) {
                cnt++;
            }
            else break;
        }
        cout << cnt << "\n";
    }
    return 0;
}