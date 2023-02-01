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
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc=1; cin>>tc;
	for(int T=1; T<=tc;T++){
		int n; cin>>n;
		string s; cin>>s;
		string a,b;
		int flag=0;
		for(int i=0; i<n; i++){
			if(s[i] == '1' and !flag){
				a += '1'; b += '0';
				flag = 1;
			}
			else if(flag){
				b += s[i];
				a += '0';
			}
			else{
				if(s[i] == '0'){
					a += '0'; b += '0';
				}
				else{
					a += '1'; b += '1';
				}
			}
		}
		cout<<a<<"\n"<<b<<"\n";
	}
	return 0;
}