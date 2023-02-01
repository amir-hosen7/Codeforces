#include <bits/stdc++.h>
using namespace std;
const int N = 100000;

vector <int> prime_list;
bool prime_ck[N+50];

void sieve()
{
    prime_list.push_back(2);
    for(int i=3; i<=N; i+=2)
    {
        if(prime_ck[i] == 0)
        {
            prime_list.push_back(i);
            for(int j = 3*i; j<N; j += (i*2))
            {
                prime_ck[j]=1;
            }
        }
    }
}

bool isPrime(long long int n)
{
    int tmp = sqrt(n) + 1;
    for(int i = 3; i <= tmp; i++)
        if(n%i==0) return false;
    return true;
}

int main()
{
    sieve();
    long long int n;
    cin >> n;

    if(n%2 == 0 and n != 2)
        return cout << n/2 << endl, 0;

    if(isPrime(n))
        return cout << 1 << endl, 0;

    int cnt = 0, i = 0;
    while(1)
    {
        if(n%prime_list[i] == 0)
        {
            n -= prime_list[i];
            break;
        }
        i++;
    }

    cout << n/2 + 1 << endl;
    return 0;
}