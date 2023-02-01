#include<iostream>
#include<stdio.h>
#include<vector>
#include<set>
using namespace std;

int main()
{
    vector <int> vec;
    set <int> mySet;
    long long int shoes;
  for(int i = 0; i < 4; i++)
    {
        cin>>shoes;
        vec.push_back(shoes);
    }
    for(int i = 0; i < vec.size(); i++)
    {
        mySet.insert(vec[i]);
    }
    int result =4 - mySet.size();
    printf("%d\n", result);
    return 0;
}