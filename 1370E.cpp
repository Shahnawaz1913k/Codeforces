#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    string a, b;
    cin >> n >> a >> b;
    ll cntz = 0, cnto = 0;
    string s;
    for(ll i = 0; i < n; i++) {
        a[i] == '1' ? ++cnto: ++cntz;
        if(a[i] != b[i]) s+=a[i];
    }
    for(ll i = 0; i < n; i++) b[i] == '1' ? --cnto: --cntz;
    if(cntz || cnto){
        cout << -1 << endl;
        return;
    }
    ll cnt = 1, ma = 0;
    for(ll i = 1; i < s.length(); i++){
        if(s[i]!=s[i-1]) ma = max(ma, cnt), cnt = 1;
        else ++cnt;
    }ma = max(ma, cnt);
    cout << (s.length() ? ma:0) << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
