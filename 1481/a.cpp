#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll px, py;
    cin >> px >> py;
    string s;
    cin >> s;
    ll l = 0, r = 0, u = 0, d = 0;
    for(ll i = 0; i < s.length(); i++){
        if(s[i] == 'R') ++r;
        if(s[i] == 'L') --l;
        if(s[i] == 'U') ++u;
        if(s[i] == 'D') --d;
    }
    //cout << l << " " << r << " " << u << " " << d << endl;
    if(l <= px && px <= r && d <= py && py <= u) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
