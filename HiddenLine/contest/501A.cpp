#include<bits/stdc++.h>
using namespace std;

int both(int point, int time)
{
    int step = (3 * point) / 10;
    int step2 = (point - (point /250) * time);
    return max(step, step2);
}

int main()
{
    int point, point2, time, time2, m, v;
    cin>>point>>point2>>time>>time2;
    m = both(point, time);
    v = both(point2, time2);
    if(m > v) cout<<"Misha"<<endl;
    else if(m < v) cout<<"Vasya"<<endl;
    else if(m == v) cout<<"Tie"<<endl;
    return 0;
}