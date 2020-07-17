#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s;
    cin >> s;
    ll n = s.length();
    map<char, ll> mp;
    for(ll i = 0; i < n; i++) mp[s[i]]++;
    char x;
    if(mp['R'] >= max(mp['P'], mp['S'])) x = 'P';
    if(mp['P'] >= max(mp['R'], mp['S'])) x = 'S';
    if(mp['S'] >= max(mp['P'], mp['R'])) x = 'R';
    for(ll i = 0; i < n; i++) cout << x;
    cout << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
