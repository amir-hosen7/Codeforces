#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	
	if(n%2==0)
	{
		for(int i=0; i < n/2; i++)
		{
			cout<<"1";
		}
		cout<<endl;
	}
	else
	{
		cout<<"7";
		for(int i=0; i < (n-3)/2; i++)
		{
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}