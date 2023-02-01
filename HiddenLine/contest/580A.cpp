#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int total, num, n, cont = 1, maxm = 1;
    scanf("%d", &total);
    scanf("%d", &n);
    for(int i = 1; i < total; i++)
    {
        scanf("%d", &num);
        if(num >= n)
        {
            cont++;
             maxm = max(cont, maxm);
        }
        else
        {
            cont = 1;
        }
        n = num;
    }
   printf("%d\n", maxm);
    return 0;
}