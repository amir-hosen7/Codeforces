#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n, cost;
    cin >> n;
    
    if(n % 2 == 0)
        cost = n / 2 - 1;
    else
        cost = n / 2;

    cout<<cost<<endl;
    return 0;
}