#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll cnt(string s, char c, ll n){
    if(n == 1) return (s[0] != c);
    ll x = 0, y = 0;
    string sx, sy;
    for(ll i = 0; i < n/2; i++) x += (s[i]!=c), sx += s[i];
    for(ll i = n/2; i < n; i++) y += (s[i]!=c), sy += s[i];
    ll res = min(x + cnt(sy, (char)(c+1), n/2), y + cnt(sx, (char)(c+1), n/2));
    return res;
}

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = cnt(s, 'a', n);
    cout << ans << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
