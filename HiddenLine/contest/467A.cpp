#include<iostream>
#include<stdio.h>
#define sf scanf
#define pf printf
using namespace std;

int main()
{
    int numberOfRoom;
    int havePeople, capacity;
    int cont = 0;
    sf("%d", &numberOfRoom);
    for(int i = 0; i < numberOfRoom; i++)
    {
        sf("%d %d", &havePeople, &capacity);
        if((capacity - havePeople) >= 2)
        {
            cont++;
        }
    }
    pf("%d", cont);
    return 0;
}