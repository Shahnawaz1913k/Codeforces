#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a, b, c, cnt = 0;
    cin >> a >> b >> c;
    if(a < c) cout << 1 << " ";
    else {
        cout << -1 << " ";
    }
    if(b*a <= c) cout << -1;
    else cout << b;
    cout << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
