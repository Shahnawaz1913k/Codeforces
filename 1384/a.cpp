#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i =0; i < n; i++) cin >> a[i];
    string s[n+2], x;
    for(ll i = 0; i < 200; i++) x+='a';
    s[0] = x;
    for(ll i =0; i < n; i++) {
        s[i+1] = s[i];
        if(s[i+1][a[i]] == 'z') s[i+1][a[i]] = 'a';
        else s[i+1][a[i]] = char(s[i+1][a[i]] + 1);
    }
    for(ll i =0; i <= n; i++) cout << s[i] << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
