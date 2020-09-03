#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y, b;
    cin >> x >> y >> b;
    ll num = x, den = y;
    ll g = __gcd(num, den);
    den/=g;
    b = __gcd(den, b);
    while(__gcd(b, den) != 1){
        den/=b;
        b = __gcd(den, b);
    }
    cout << (den > 1 ? "Infinite": "Finite") << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}