#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, ans;
    bool check = false;

    getchar();
    while(n--)
    {
        cin >> s;
        ans += s;
        ans += 'a';
    }
    int l = ans.length();
    //cout << ans << endl;
    for(int i = 0; i < l-1; i++)
    {
        if(ans[i] == 'O' && ans[i+1] == 'O')
        {
            ans[i] = '+';
            ans[i+1] = '+';
            check = true;
            break;
        }
    }
    //cout << ans << endl;
    if(check) cout<< "YES" << endl;
    else return cout << "NO" << endl, 0;

    for(int i = 1; i <= l; i++)
    {
        if(ans[i-1] == 'a')
            cout << endl;
        else cout << ans[i-1];
    }
    return 0;
}