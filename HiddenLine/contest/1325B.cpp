#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5;
 
int32_t main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc; T++){
		int n; cin>>n;
		int a; set<int> st;
		for(int i=0; i<n; i++){
			cin>>a; 
			st.insert(a);
		}
		cout<<st.size()<<"\n";
	}
	return 0;
}