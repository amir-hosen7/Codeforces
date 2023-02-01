#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int ar[1001], a;
    int n;
    cin>> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(a % 2 == 0)
            a = a - 1;
        ar[i] = a;
    }

    for(int i = 0; i < n; i++)
        cout<<ar[i] << " ";
    cout<<endl;

    return 0;
}