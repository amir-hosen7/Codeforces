#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
const int N=1e7+50;
const int mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc;T++){
		ll n,k; cin>>n>>k;
		string ans = "YES";
		if((k*k) > n) ans = "NO";
		else if(n%2 != k%2) ans = "NO";
		cout<<ans<<"\n";
	}
	return 0;
}