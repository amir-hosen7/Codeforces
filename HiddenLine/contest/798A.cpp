#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;
    cin>>s;
    s2 = s;
    reverse(s.begin(), s.end());
    int l = s.size(), flage = 0;
    for(int i = 0; i < l; i++)
    {
        if(s2[i] != s[i])
        {
            flage++;
        }
    }
    if(flage == 2) cout<<"YES"<<endl;
    else if(flage == 0 && s2.size() % 2 != 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}