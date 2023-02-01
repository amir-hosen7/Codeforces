#include<iostream>
#include<stdio.h>
typedef long long int ll;
#define  pf printf
using namespace std;

int main()
{
    ll number, rem, cont = 0;
    cin>>number;
    while(number != 0)
    {
        rem = number % 10;
        number /= 10;
        if(rem == 7 || rem == 4)
        {
            cont++;
        }
    }
    if(cont == 4 || cont == 7)
    {
        pf("YES\n");
    }
    else
    {
        pf("NO\n");
    }
    return 0;
}