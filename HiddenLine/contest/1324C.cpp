#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5;

int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc; T++){
		string s; cin>>s;
		vector<char> v(s.begin(), s.end());
		v.push_back('R');
		int n = v.size(), cnt = 1, res = 1;
		for(int i=0; i<n; i++){
			if(v[i] == 'R'){
				res = max(res, cnt);
				cnt = 1;
			}
			else{
				cnt++;
			}
		}
		cout<<res<<"\n";
	}
	return 0;
}