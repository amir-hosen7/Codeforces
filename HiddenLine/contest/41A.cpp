#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    reverse(t.begin(), t.end());
    if(s == t)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}