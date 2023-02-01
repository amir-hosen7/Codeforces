#include<bits/stdc++.h>
#define int long long int
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e5+50;

int32_t main(){
	int tc = 1; cin>>tc;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		sort(all(v), greater<int>());
		for(int i=0; i<n; i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}