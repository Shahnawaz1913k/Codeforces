#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll r, c;
    cin >> r >> c;
    string s[r];
    for(ll i = 0; i < r; ++i) cin >> s[i];
    ll a[r], b[c];
    for(ll i = 0; i < r; i++){
        ll cnt = 0;
        for(ll j = 0; j < c; ++j) if(s[i][j] =='A') ++cnt;
        a[i] = cnt;
    }
    for(ll i = 0; i < c; i++){
        ll cnt = 0;
        for(ll j = 0; j < r; ++j) if(s[j][i] =='A') ++cnt;
        b[i] = cnt;
    }
    ll flag = 0, ch = 0;
    for(ll i = 0; i < r; ++i) {
        if(a[i]) flag = 1;
        if(a[i] == c) ++ch;
    }
    if(ch == r){
        cout << 0 << endl; return;
    }
    for(ll i = 0; i < c; ++i) {
        if(b[i]) flag = 1;
        if(b[i] == r) ++ch;
    }
    if(!flag){
        cout << "MORTAL" << endl; return;
    }
    if(a[0] == c || a[r-1] == c || b[0] == r || b[c-1] == r) cout << 1 << endl;
    else if(ch || s[0][0] == 'A' || s[0][c-1] == 'A' || s[r-1][0] == 'A' || s[r-1][c-1] == 'A') cout << 2 << endl; 
    else if(a[0] == 0 && a[r-1] == 0 && b[0] == 0 && b[c-1] == 0) cout << 4 << endl;
    else cout << 3 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}