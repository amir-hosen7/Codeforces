#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e4;

bool isPrime[N+5];
vector<ll> prime;

void sieve(){
	prime.push_back(2);
	for(ll i=4; i<N; i+=2){isPrime[i]=1;}
	for(ll i=3; i<N; i+=2){
		if(isPrime[i]==0){
			prime.push_back(i);
			for(ll j=(i*i); j<N; j+=(i*2)){
				isPrime[j]=1;
			}
		}
	}
}

int main(){
	sieve();
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a = upper_bound(prime.begin(),prime.end(), (n-1)) - prime.begin();
		while(isPrime[prime[a]-(n-1)]==0){
			a++;
		}
		ll last = prime[a] - (n-1);
		for(ll i=1; i<n; i++){
			for(ll j=1; j<=n; j++){
				if(j!=n){cout<<"1 ";}
				else{cout<<last<<"\n";}
			}
		}
		ll b = last*(n-1);
		a = upper_bound(prime.begin(),prime.end(), b) - prime.begin();
		while(isPrime[prime[a]-b]==0){
			a++;
		}
		ll c = prime[a] - b;
		for(ll i=1; i<=n; i++){
			if(i==n){cout<<c<<"\n";}
			else{cout<<last<<" ";}
		}
	}
	return 0;
}