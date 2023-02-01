#include<bits/stdc++.h>
#define int long long int
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e5+50;

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int tc = 1; cin>>tc;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		int a, odd = 0, evn = 0;
		for(int i=0; i<n; i++){
			cin>>a;
			if(a&1) odd++;
			else evn++;
		}
		if(!odd or !evn) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}