#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    string s[50];
    for(ll i = 0; i < 50; i++) s[0]+='0';
    for(ll i = 1; i < 50; i++) s[i] = s[i-1];
    ll i = 1, j = 1;
    for(ll k = 1; k < a; ++k){
        s[i][j] = 'A';
        j+=2;
        if(j > 48) i+=2, j = 1;
    }
    i = 12, j = 1;
    for(ll k = 1; k < b; ++k){
        s[i][j] = 'B';
        j+=2;
        if(j > 48) i+=2, j = 1;
    }
    i = 23, j = 1;
    for(ll k = 1; k < c; ++k){
        s[i][j] = 'C';
        j+=2;
        if(j > 48) i+=2, j = 1;
    }
    i = 34, j = 1;
    for(ll k = 1; k < d; ++k){
        s[i][j] = 'D';
        j+=2;
        if(j > 48) i+=2, j = 1;
    }
    for(ll i = 0; i < 50; ++i) for(ll j = 0; j < 50; ++j) if(s[i][j] == '0'){
        if(i < 11) s[i][j] = 'B';
        else if(i < 22) s[i][j] = 'A';
        else if(i < 33) s[i][j] = 'D';
        else s[i][j] = 'C';
    }
    cout << "50 50\n";
    for(ll i = 0; i < 50; ++i) { for(ll j = 0; j < 50; ++j) cout << s[i][j]; cout << endl; }
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}