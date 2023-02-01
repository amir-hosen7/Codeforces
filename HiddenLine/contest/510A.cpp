#include<iostream>
#include<stdio.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int n, m;
    int check = 0, c = 1;
    sf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        check ++;
        for(int j = 1; j <= m; j++)
        {
            if(check % 2 != 0)
           {
                pf("#");
             //   c = 1;
           }
           else
           {
               if(j == m && c == 1)
               {
                   pf("#");
                   c = 0;
               }
               else if(j == m && c == 0)
               {
                   pf(".");
                   c = 1;
               }
               else if(j == 1 && c == 0)
               {
                   pf("#");
                   c = 0;
               }
               else
               {
                   pf(".");
               }
           }
        }
        pf("\n");
    }
    return 0;
}