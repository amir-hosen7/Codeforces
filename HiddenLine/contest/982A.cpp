#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>
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
const int N = 1000002;

int main()
{
    int t = 1;
    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if((s[0] == '0' and s[1] == '0') or (s[n-1] == '0' and s[n-2] == '0') )
            return cout << "No" << endl, 0;
        else if(n == 1 and s[0] == '0')
            return cout << "No" << endl, 0;

        int cnt = 0, one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
                cnt++;
            else cnt = 0;

            if(s[i] == '1')
                one++;
            else one = 0;
            if(cnt == 3 || one == 2)
                return cout << "No" << endl, 0;
        }
        cout << "Yes" << endl;
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//