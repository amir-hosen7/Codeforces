#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		reverse(v.begin(), v.end());
		for(int i=0; i<n; i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}