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
        char ch;
        cin >> ch;
        getchar();
        string s;
        cin >> s;

        int l = s.length();
        if(ch == 'R')
        {
            for(int i = 0; i < l; i++)
            {
                if(s[i] == 'p') cout << "o";
                else if(s[i] == 'o') cout << "i";
                else if(s[i] == 'i') cout << "u";
                else if(s[i] == 'u') cout << "y";
                else if(s[i] == 'y') cout << "t";
                else if(s[i] == 't') cout << "r";
                else if(s[i] == 'r') cout << "e";
                else if(s[i] == 'e') cout << "w";
                else if(s[i] == 'w') cout << "q";

                else if(s[i] == ';') cout << "l";
                else if(s[i] == 'l') cout << "k";
                else if(s[i] == 'k') cout << "j";
                else if(s[i] == 'j') cout << "h";
                else if(s[i] == 'h') cout << "g";
                else if(s[i] == 'g') cout << "f";
                else if(s[i] == 'f') cout << "d";
                else if(s[i] == 'd') cout << "s";
                else if(s[i] == 's') cout << "a";

                else if(s[i] == '/') cout << ".";
                else if(s[i] == '.') cout << ",";
                else if(s[i] == ',') cout << "m";
                else if(s[i] == 'm') cout << "n";
                else if(s[i] == 'n') cout << "b";
                else if(s[i] == 'b') cout << "v";
                else if(s[i] == 'v') cout << "c";
                else if(s[i] == 'c') cout << "x";
                else if(s[i] == 'x') cout << "z";
            }
        }
        else
        {
            for(int i = 0; i < l; i++)
            {
                if(s[i] == 'o') cout << "p";
                else if(s[i] == 'i') cout << "o";
                else if(s[i] == 'u') cout << "i";
                else if(s[i] == 'y') cout << "u";
                else if(s[i] == 't') cout << "y";
                else if(s[i] == 'r') cout << "t";
                else if(s[i] == 'e') cout << "r";
                else if(s[i] == 'w') cout << "e";
                else if(s[i] == 'q') cout << "w";

                else if(s[i] == 'l') cout << ";";
                else if(s[i] == 'k') cout << "l";
                else if(s[i] == 'j') cout << "k";
                else if(s[i] == 'h') cout << "j";
                else if(s[i] == 'g') cout << "h";
                else if(s[i] == 'd') cout << "f";
                else if(s[i] == 'f') cout << "g";
                else if(s[i] == 's') cout << "d";
                else if(s[i] == 'a') cout << "s";

                else if(s[i] == '.') cout << "/";
                else if(s[i] == ',') cout << ".";
                else if(s[i] == 'm') cout << ",";
                else if(s[i] == 'n') cout << "m";
                else if(s[i] == 'b') cout << "n";
                else if(s[i] == 'v') cout << "b";
                else if(s[i] == 'c') cout << "v";
                else if(s[i] == 'x') cout << "c";
                else if(s[i] == 'z') cout << "x";
            }
        }
    }
    return 0;

}

//-----------------------------------***********************----------------------------------------------//