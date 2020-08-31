#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    string a[m], b[m];
    set<string> s;
    for(ll i = 1; i <= n; i++) s.insert(to_string(i));
    for(ll i = 0; i < m; i++) cin >> a[i] >> b[i];
    map<string, ll> mp; ll f = 0;
    for(ll i = 0; i < m-1; ++i) {
        if(b[i] == b[i+1] && a[i] == "-" && a[i+1] == "+") {++i; continue;}
        else if(!i) continue;
        if(mp[b[i]] == 0 && a[i] == "-") f = 10;
        if(s.find(b[i]) != s.end()) s.erase(b[i]);
    }
    if(f) if(s.find(b[0]) != s.end()) s.erase(s.find(b[0]));
    if(b[0] != b[m-1] || !(m==1 || (a[0] == "+" && a[m-1] == "-"))){
     if(s.find(b[0]) != s.end()) s.erase(s.find(b[0]));
     if(s.find(b[m-1]) != s.end()) s.erase(s.find(b[m-1]));
    }
    cout << s.size() << endl;
    for(auto &i: s) cout << i << " ";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
