#include<bits/stdc++.h>
#define int long long int
#define all(v) v.begin(), v.end()
using namespace std;
const int N = 1e5;


int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		bool ok = false;
		for(int i=0; i<n; i++){
			if(find(v.begin()+(i+2), v.end(), v[i]) != v.end()){
				ok = true; break;
			}
		}
		if(ok) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}