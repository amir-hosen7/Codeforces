
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, mix;
    cin>>guest>>host>>mix;
    guest = guest + host;
    sort(guest.begin(), guest.end());
    sort(mix.begin(), mix.end());
    if(guest == mix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}