#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;
    int n, temp = 0, temp2 = 0, c = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>ch;
        if(ch == '1' && c == 0)
        {
            temp = 1;
            c++;
        }
        else if(ch == '0')
        {
            temp2++;
        }
    }
    if(c > 0)
    cout<<"1";
    for(int i = 0; i < temp2; i++) cout<<"0";
    return 0;
}