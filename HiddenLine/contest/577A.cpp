#include<iostream>
#include<stdio.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll rowClm, num, cont = 0;
    cin>>rowClm>>num;
    for(int i = 1; i <= rowClm; i++)
    {
        if((num % i == 0)  &&   (num / i <= rowClm))
           {
               //cout<<i<<endl;
               cont++;
           }
    }
   cout<<cont<<endl;
    return 0;
}