#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec;
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = (a + b) * c;
    vec.push_back(sum);
    sum = (a * b) + c;
    vec.push_back(sum);
    sum = a + b + c;
    vec.push_back(sum);
    sum = a + (b * c);
    vec.push_back(sum);
    sum = a * (b + c);
     vec.push_back(sum);
    sum = a * b * c;
    vec.push_back(sum);
    sort(vec.begin(), vec.end());
    cout<<vec[vec.size() - 1]<<endl;
    return 0;
}