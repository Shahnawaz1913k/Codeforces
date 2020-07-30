#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y, l, r;
    cin >> l >> r;
    x = l, y = (r/l)*l;
    ll lcm = x*y/__gcd(x, y);
    if(l <= lcm && lcm <= r && x != y) cout << x << " " << y << endl;
    else cout << -1 << " " << -1 << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
