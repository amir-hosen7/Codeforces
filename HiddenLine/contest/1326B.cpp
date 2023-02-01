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
	int tc=1;
	for(int T=1; T<=tc;T++){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		int x = 0;
		for(int i=0; i<n; i++){
			int ans = v[i] + x;
			cout<<ans<<" ";
			x = max(x, ans);
		}
	}
	return 0;
}