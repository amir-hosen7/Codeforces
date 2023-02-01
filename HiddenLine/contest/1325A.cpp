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
		if(n%2 == 0){
			cout<<n/2<<" "<<n/2<<"\n";
		}
		else{
			cout<<"1 "<<n-1<<"\n";
		}
	}
	return 0;
}