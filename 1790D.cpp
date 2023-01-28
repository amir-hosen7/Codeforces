#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll num;
        vector<ll> v;
        map<ll, ll> cnt;
        for (ll i = 0; i < n; i++) {
            cin >> num;
            cnt[num]++;
            if (cnt[num] == 1) {
                v.push_back(num);
            }
        }
        sort(v.begin(), v.end());
        ll res = cnt[v[0]], siz = v.size();
        for (ll i = 1; i < siz; i++) {
            if ((v[i] - v[i - 1]) != 1) {
                res += cnt[v[i]];
            }
            else {
                if (cnt[v[i]] > cnt[v[i - 1]]) {
                    res += (cnt[v[i]] - cnt[v[i - 1]]);
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
