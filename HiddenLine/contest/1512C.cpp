#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 2147483647

//---------------------------------------------------------------------------//

//Timus: 314795JS

//knight moves
//ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2}; 	
//ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1}; 
//ll dx[]={1,-1,0,0};
//ll dy[]={0,0,1,-1};

void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
ll toInt(string s){stringstream ss;ss<<s;int n;ss>>n;return n;}
string toString(ll n){stringstream ss;ss<<n;string s;ss>>s;return s;}
string UPPER(string s){transform(all(s),s.begin(),::toupper);return s;}
string LOWER(string s){transform(all(s),s.begin(),::tolower);return s;}
bool isDigit(char ch){if(ch>=48 && ch<=57)return true;else return false;}
vector<ll>removeDup(vector<ll>v){sort(all(v)); v.resize(distance(v.begin(),unique(all(v))));return v;}
bool isVowel(char ch){ch=toupper(ch);if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E'){return true;}return false;}
bool isCons(char ch){if(isalpha(ch) && !isVowel(ch)){return true;}return false;}

//------------------------------------------------------------------------------//

const ll p=29;
const ll N=2e6+50;
const ll mod=1e9+7;


int main(){

	//freopen("C:/Users/Aman/Documents/output.txt", "w", stdout);
	//freopen("C:/Users/Aman/Documents/input.txt", "r", stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll zero,one;
		cin>>zero>>one;
		string str;
		cin>>str;
		ll len=str.size();
		ll o=0,z=0;
		for(ll i=0; i<len; i++){
			if(str[i]=='0'){
				z++;
			}
			else if(str[i]=='1'){
				o++;
			}
		}
		ll idx=len-1,ok=1;
		for(ll i=0; i<(len+1)/2; i++){
			if(str[i]=='?' or str[idx-i]=='?'){
				if(i!=(idx-i)){
					if(str[i]=='?' and str[idx-i]=='1'){
						if((o+1)<=one){
							o++;
							str[i]='1';
						}
						else{
							ok=0; break;
						}
					}
					else if(str[i]=='1' and str[idx-i]=='?'){
						if((o+1)<=one){
							o++;
							str[idx-i]='1';
						}
						else{
							ok=0; break;
						}
					}
					else if(str[i]=='?' and str[idx-i]=='0'){
						if((z+1)<=zero){
							z++;
							str[i]='0';
						}
						else{
							ok=0; break;
						}
					}
					else if(str[i]=='0' and str[idx-i]=='?'){
						if((z+1)<=zero){
							z++;
							str[idx-i]='0';
						}
						else{
							ok=0; break;
						}
					}
				}
			}
		}
		for(ll i=0; i<(len+1)/2; i++){
			if(i==(idx-i) and str[i]=='?'){
				if((o+1)<=one){
					str[i]='1';o++;
				}
				else if((z+1)<=zero){
					str[i]='0';z++;
				}
				else{
					ok=0; break;
				}
			}
			if(str[i]=='?' and str[idx-i]=='?'){
				if((o+2)<=one){
					str[i]='1';
					str[idx-i]='1';
					o+=2;
				}
				else if((z+2)<=zero){
					str[i]='0';
					str[idx-i]='0';
					z+=2;
				}
				else{
					ok=0; break;
				}
			}
		}
		//cout<<str<<"\n";
		string temp=str;
		reverse(all(temp));
		if(temp!=str or ok==0){
			cout<<"-1\n";
		}
		else{
			//cout<<str<<" aman "<<o<<" "<<z<<"\n";
			if(o==one and z==zero){
				cout<<str<<"\n";
			}
			else{
				cout<<"-1\n";
			}
		}
	}
	return 0;
}