#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int N = 1e5;

int32_t main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	//freopen("codeforcesIn.txt","r",stdin);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc; T++){
		string s; cin>>s;
		int len = s.size();
		vector<int> v;
		int one = 0, res = 0;
		for(int i=0; i<len; i++){
			if(s[i]=='1'){
				one++;
			}
			else{
				if(one){
					v.push_back(one);
					one=0;
				}
			}
		}
		if(one){
			v.push_back(one);
		}
		len = v.size();
		sort(v.begin(), v.end());
		for(int i=len-1; i>=0; i-=2){
			res += v[i];
		}
		cout<<res<<"\n";
	}
	return 0;
}