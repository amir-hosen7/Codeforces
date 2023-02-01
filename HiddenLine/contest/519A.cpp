/**Bismillahir Rahmanir Rahim.**/
#include <bits/stdc++.h>
#define mem(a, v)           memset(a, v, sizeof a)
#define ast(v)              sort(v.begin(),v.end())
#define dst(v)              sort(v.begin(),v.end(), greater <int> ())
#define ass(tmp, v)         tmp.assign(v.begin(), v.end())
#define rep(i, l, r)        for (int i = (l); i <= (r); ++i)
#define sf(n)               scanf("%d", &n)
#define sff(n, m)           scanf("%d %d",&n,&m)
#define sfl(n)              scanf("%lld", &n)
#define sfu(n)              scanf("%llu", &n)
#define sffl(n, m)          scanf("%lld %lld",&n,&m)

#define pf(n)               printf("%d", n)
#define sp                  printf(" ")
#define nl                  printf("\n")
#define prln(n)             printf("%d\n", n)
#define pfl(n)              printf("%lld", n)
#define pfu(n)              printf("%llu", n)
#define pb                  push_back
#define pp                   pair<ll,ll>
#define mp                  make_pair
#define mod                 1e9+7
#define mxx                 1e9
#define mii                 -1e9
#define T                   true
#define F                   false
#define S                   second
#define f                   first
#define PI                  3.1415926

//-----------------------------------***********************----------------------------------------------//

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
const int N = 100002;

bool des(pair<string,ll> a, pair<string, ll> b)
{
    if(a.second!= b.second) return a.second > b.second;    /// kom theke beshi sort ///return p.first > q.first; /// beshi theke kom sort
    else return a.first < b.first;
}



int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);

    int test = 1;
    while(test--)
    {
        //freopen("output.txt", "w", stdout);
        string s;
        int white = 0, black = 0;
        for(int i = 0; i < 8; i++)
        {
            cin >> s;
            for(int i = 0; i < 8; i++)
            {
                if(s[i] == 'Q' or s[i] == 'R' or s[i] == 'B' or s[i] == 'N' or s[i] == 'P')
                {
                    if(s[i] == 'Q') white += 9;
                    else if(s[i] == 'R') white += 5;
                    else if(s[i] == 'B') white += 3;
                    else if(s[i] == 'N') white += 3;
                    else white += 1;
                }
                else if(s[i] == 'q' or s[i] == 'r' or s[i] == 'b' or s[i] == 'n' or s[i] == 'p')
                {
                    if(s[i] == 'q') black += 9;
                    else if(s[i] == 'r') black += 5;
                    else if(s[i] == 'b') black += 3;
                    else if(s[i] == 'n') black += 3;
                    else black += 1;
                }
            }
        }
        //cout << white << " " << black << endl;
        if(white > black) cout << "White" << endl;
        else if(white < black) cout << "Black" << endl;
        else cout << "Draw" << endl;
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//