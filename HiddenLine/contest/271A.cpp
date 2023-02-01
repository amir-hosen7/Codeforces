#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{
    int cont = 0;
    while(n != 0)
    {
        n /= 10;
        cont++;
    }
    return cont;
}

int check(int n)
{
    set <int> s;
    int a;
   while(n != 0)
   {
       a = n % 10;
       s.insert(a);
       n /= 10;
   }

   //cout << s.size();
    return s.size();
}

int main()
{
    int year;
    cin >> year;

    int flag;
    for(int i = year + 1;  ; i++)
    {
        if(check(i) ==  digit(i))
        {
            flag = i;
            break;
        }
    }
    cout << flag << endl;

    return 0;
}