#include<bits/stdc++.h>
using namespace std;

int main()
{
    int candle, make, ans;
    cin>>candle>>make;
     ans = candle;
    while(candle / make)
    {
        ans += candle / make;
        candle = (candle % make) + (candle / make);
    }
    cout<<ans<<endl;
    return 0;
}