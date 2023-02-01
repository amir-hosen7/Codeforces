#include<iostream>
using namespace std;

int main()
{
    int gameNumber, m, c, mishka = 0, chris = 0;
    cin>>gameNumber;
    while(gameNumber --)
    {
        cin>>m>>c;
        if(m > c) mishka ++;
        else if(m < c) chris ++;
    }
    if(mishka > chris) cout<<"Mishka"<<endl;
    else if(mishka < chris) cout<<"Chris"<<endl;
    else if(mishka == chris) cout<<"Friendship is magic!^^"<<endl;
}