
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
    int a, b, d, h, ans;
    scanf("%d %d", &a, &b);
    d = (int)(abs(a - b));
    h = d / 2;
    ans = h * (h + 1);

    if (d  & 1)
    {
          ans += (h +1);
    }
    printf("%d\n", ans);
    return 0;
}