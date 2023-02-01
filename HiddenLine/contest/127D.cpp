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
const int N = 1000002;


int check[N];
vector <int> prefix(int n, string pattern)
{
    int index = 0;
    vector <int> lps(n);

    for(int i = 1; i < n; )
    {
        if(pattern[index] == pattern[i])
        {
            lps[i] = index + 1;
            i++;
            index++;
        }
        else
        {
            if(index)
                index = lps[index-1];
            else
                lps[i] = 0, i++;
        }
    }
    return lps;
}


int main()
{
    int t = 1;
    while(t--)
    {
        string s;
        int n;

        cin >> s;
        n = s.length();
        vector <int> lps = prefix(n, s);

        for(int i = 0; i < n-1; i++)
            check[lps[i]]++;

        int j = n - 1;
        while (lps[j] > 0)
        {
            if (check[lps[j]])
            {
                for(int i = 0; i < lps[j]; i++)
                    cout << s[i];
                nl;
                //cout << s.substr(0, lps[j]) << endl;
                return 0;
            }
            j = lps[j-1];
        }

        cout << "Just a legend\n";
    }

    return 0;
}
//-----------------------------------***********************----------------------------------------------//