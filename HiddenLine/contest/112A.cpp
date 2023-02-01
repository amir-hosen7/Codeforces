/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM                                   **/
/**                                 Amantu Amir-Hacker                                     **/
/**  Department of Computer Science and Engineering           **/
/**                          University of Barisal                                              **/
/**                                                                                                                **/
/******************************************************/
/******************************************************/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;
    int l = a.size();
    for(int i = 0; i < l; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            a[i] = 'a' + a[i] - 'A';
        }
         if(b[i] >= 65 && b[i] <= 90)
        {
            b[i] = 'a' + b[i] - 'A';
        }
        // a[i] = tolower(a[i]);
       // b[i] = tolower(b[i]);
    }
    if(a.compare(b) == 0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i = 0; i < l; i++)
        {
            if(a[i] > b[i])
            {
                cout<<"1"<<endl;
                return 0;
            }
            else if(a[i] < b[i])
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
    return 0;
}