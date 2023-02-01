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
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=3e5+50;
const ll mod=1e9+7;


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll t=1;
	cin>>t;
	for(ll T=1; T<=t; T++){
        char board[10][10];
        ll tot=0;
        for(ll i=0; i<8; i++){
            for(ll j=0; j<8; j++){
                cin>>board[i][j];
                if(board[i][j]=='#'){
                    tot++;
                }
            }
        }
        ll x, y;
        for(ll i=0; i<8; i++){
            for(ll j=0; j<8; j++){
                if(board[i][j]=='#'){
                    ll row=i-1, col=j+1, cnt=1;
                    while(row>=0 and col<8 and board[row][col]=='#'){
                        cnt++, row--, col++;
                    }
                    row=i+1, col=j-1;
                    while(row<8 and col>=0 and board[row][col]=='#'){
                        cnt++, row++, col--;
                    }
                    row=i-1, col=j-1;
                    while(row>=0 and col<8 and board[row][col]=='#'){
                        cnt++, row--, col--;
                    }
                    row=i+1, col=j+1;
                    while(row>=0 and col<8 and board[row][col]=='#'){
                        cnt++, row++, col++;
                    }
                    if(cnt==tot){
                        x=i+1, y=j+1;
                    }
                }
            }
        }
        cout<<x<<" "<<y<<"\n";
	}
	return 0;
}