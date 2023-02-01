#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		int sum=0;
		for(int i=0; i<n; i++){
			if(v[i]>0){
				sum+=v[i];
			}
			else{
				sum-=min(sum, abs(v[i]));
			}
		}
		cout<<sum<<"\n";	
	}
	return 0;
}