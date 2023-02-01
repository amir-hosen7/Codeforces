#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    int n, m, p, cont = 0;
    cin>>n>>m;
    int ar[n];
    for(int i = 0; i < n; i++)
        cin>>ar[i];
    for(int i = 0; i < n ; i++)
    {
        if(ar[i] >= ar[m - 1] && ar[i] != 0)
        {
           cont ++;
        }
    }
    printf("%d\n", cont);
    return 0;
}