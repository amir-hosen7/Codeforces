#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n), odd, even;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2) odd.push_back(i);
            else even.push_back(i);
        }
        if (odd.size() >= 3) {
            cout << "YES\n";
            for (ll i = 0; i < 3; i++) {
                cout << odd[i] + 1 << " ";
            }
            cout << "\n";
        }
        else if(odd.size() and even.size() >= 2) {
            cout << "YES\n";
            cout << odd[0] + 1 << " " << even[0] + 1 << " " << even[1] + 1 << "\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}