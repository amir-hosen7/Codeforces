#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#define pf printf
#define sf scanf
using namespace std;
typedef long int l;
typedef long long int ll;

int main()
{
    ll n, m, a, row, colm;
    sf("%lld %lld %lld", &n, &m, &a);
    if(n % a == 0)
    {
        row = n / a;
    }
    else
    {
        row = ceil ((double)n / a);
        //cout<<row;
    }
    if(m % a == 0)
    {
        colm = m / a;
    }
    else
    {
        colm = ceil ((double)m / a);
    }
    pf("%lld\n", row * colm);
    return 0;
}