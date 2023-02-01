/**Bismillahir Rahmanir Rahim.**/
#include <bits/stdc++.h>
#define nl printf("\n")
#define pp pair<ll,ll>
#define mem(a, s) memset(a, s, sizeof a)
#define ast(v) sort(v.begin(),v.end())
#define dst(v) sort(v.begin(),v.end(), greater <int> ())
#define vas(tmp, v) tmp.assign(v.begin(), v.end())
#define rep(i, l, r) for (int i = (l); i < (r); ++i)
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)

#define pf(n) printf("%d", n)
#define sp printf(" ")
#define pfl(n) printf("%lld", n)
#define pfu(n) printf("%llu", n)
#define pb push_back
#define PI 3.1415926

//-----------------------------------***********************----------------------------------------------//



typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 2000010;


int check[N];
int main()
{
    int n;
    sf(n);

    int a;
    ll sum = 0;
    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        v.pb(a);
        check[a]++;
    }

    vector <int> ans;
    for(int i = 0; i < n; i++)
    {
        if((sum - v[i])/2 > N)
            continue;

        check[v[i]]--;

        if((sum - v[i])%2 == 0 and check[(sum - v[i])/2] > 0)
            ans.pb(i+1);

        check[v[i]]++;
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    nl;

    return 0;
}

//-----------------------------------***********************----------------------------------------------//