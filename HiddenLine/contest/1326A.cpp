#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
const int N=1e5+50;
const int mod=1e9+7;

int main(){
	int tc=1; cin>>tc;
	for(int T=1; T<=tc;T++){
		int n; cin>>n;
		if(n==1){
			cout<<"-1\n"; continue;
		}
		cout<<"2";
		for(int i=0; i<n-1; i++){
			cout<<"3";
		}
		cout<<"\n";
	}
	return 0;
}