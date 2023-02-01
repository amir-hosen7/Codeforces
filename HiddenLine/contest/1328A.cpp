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
const int N=1e5+50;
const int mod=1e9+7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc;T++){
		ll a,b; cin>>a>>b;
		ll ans=0;
		if(a%b)
		     ans = b-a%b;
		cout<<ans<<"\n";
	}
	return 0;
}