#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5+50;
 
 
vector<int> G[N];
int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		int u, v;
		vector<pair<int,int>> V;
		for(int i=0; i<n-1; i++){
			cin>>u>>v;
			V.push_back((make_pair(u,v)));
			G[u].push_back(v);
			G[v].push_back(u);
		}
		int idx = 0;
		int res[n+5];
		memset(res, -1, sizeof(res));
		for(int i=0; i<n-1; i++){
			if(G[V[i].first].size() == 1 or G[V[i].second].size() == 1){
				res[i] = idx++;
			}
		}
		for(int i=0; i<n-1; i++){
			if(res[i] == -1){
				cout<<idx++<<"\n";
			}
			else cout<<res[i]<<"\n";
		}
	}
	return 0;
}