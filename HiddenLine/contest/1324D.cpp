#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5;

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		vector<int> a(n), v(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int b;
		for(int i=0; i<n; i++){
			cin>>b;
			v[i] = a[i] - b;
		}
		int res = 0;
		sort(v.begin(), v.end());
		for(int i=n-1; i>=0; i--){
			int val;
			if(v[i] > 0) val = -(v[i]-1);
			else break;
			int idx = lower_bound(v.begin(), v.end(), val) - v.begin();
			res += (i-idx);
		}
		cout<<res<<"\n";
	}
	return 0;
}