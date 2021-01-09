#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll cnt = max(a+b, c+d);
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
