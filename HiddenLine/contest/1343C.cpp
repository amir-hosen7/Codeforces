#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<queue>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
using namespace std;
const int N=1e5+50;
const int mod=1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll tc=1; cin>>tc;
	for(ll T=1; T<=tc;T++){
		ll n; cin>>n;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		ll ch = 1, sum=0, i=0;
		if(v[0]<0) ch = -1;
		while(i<n){
			if(ch > 0){
				ll mx = v[i];
				while(ch>0){
					mx = max(mx, v[i]);
					i++;
					if(i == n) break;
					if(v[i]<0){
						ch = -1;
					}
				}
				//cout<<mx<<"a\n";
				sum += mx;
			}
			else{
				ll mx = v[i];
				//cout<<ch<<"\n";
				while(ch < 0){
					mx = max(mx, v[i]);
					i++;
					if(i == n) break;
					if(v[i]>0){
						ch = 1;
					}
				}
				//cout<<mx<<"\n";
				sum += mx;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}