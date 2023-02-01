#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    long int n, m, result, num = 2;
    scanf("%ld %ld", &n, &m);
    num = pow(2, n);
    result =  m % num;
    printf("%ld\n", result);
    return 0;
}