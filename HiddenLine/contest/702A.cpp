#include<bits/stdc++.h>
using namespace std;

int main()
{
     long int n, num, cont = 1, temp, i, check = 1;
     scanf("%ld %ld", &n, &temp);
    for( i = 1; i < n; i++)
    {
         scanf("%ld", &num);
         if(temp < num)
         {
             cont++;
             if(cont > check)
             {
                 check = cont;
             }
             temp = num;
         }
         else
         {
             cont = 1;
             temp = num;
         }
     }
     printf("%ld\n", check);
    return 0;
}