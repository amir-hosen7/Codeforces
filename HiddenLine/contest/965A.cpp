#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int people, airplanes, div, paper, need, totalNeed, ans;
    cin>>people>>airplanes>>div>>paper;
     need = ceil((double)airplanes / div);
     totalNeed = need * people;
     ans = ceil((double)totalNeed / paper);
    cout<<ans<<endl;
    return 0;
}