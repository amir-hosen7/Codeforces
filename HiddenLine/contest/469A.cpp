#include<iostream>
#include<stdio.h>
#include<set>
using namespace std;

int main()
{
    set <int> mySet;
    int totalLevel;
    int x, y, a, b;
    scanf("%d", &totalLevel);
    scanf("%d", &x);
    for(int i = 0; i < x; i++)
    {
        scanf("%d", &a);
        mySet.insert(a);
    }
    scanf("%d", &y);
    for(int i = 0; i < y; i++)
    {
        scanf("%d", &b);
        mySet.insert(b);
    }
    if(mySet.size() == totalLevel)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}