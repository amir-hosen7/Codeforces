#include<iostream>
#include<stdio.h>
#include<cmath>
#include<cstring>
#define pf printf
#define sf scanf
using namespace std;
typedef long int l;
typedef long long int ll;

int main()
{
    string s;
    getline(cin, s);
    int l = s.size();
    bool flag = false;
    for(int i = 0; i < l; i++)
    {
            if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            {
                flag = true;
                break;
            }
    }
    if(flag)
        pf("YES\n");
    else
        pf("NO\n");
    return 0;
}