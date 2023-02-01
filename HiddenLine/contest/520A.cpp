#include<iostream>
#include<stdio.h>
#include<cstring>
#include<set>
using namespace std;

int main()
{
    set <char> mySet;
    int length;
    scanf("%d", &length);
    char ch[length + 1];
    scanf("%s", ch);
    for(int i = 0; i < strlen(ch); i++)
    {
        char c = tolower(ch[i]);
        mySet.insert(c);
    }
    if(mySet.size() == 26)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}