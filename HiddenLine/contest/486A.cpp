#include<stdio.h>
typedef long long int ll;
//using namespace std;

int main()
{
     ll n, sum;
    scanf("%lld", &n);
  if(n % 2 == 0)
  {
      sum = n /2;
  }
  else
  {
      sum = (-n/2) - 1;
  }
  printf("%lld", sum);

 // printf("%lld\n", (n % 2)?  (-n / 2 - 1) : (n/2 ) );

    return 0;
}