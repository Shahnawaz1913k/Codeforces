#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m, f, s;
    cin >> n >> m >> f >> s;
    ll fcnt = abs(n-m);
    ll scnt = min(n, m);
    fcnt += (scnt + scnt - s);
    if(fcnt >= f && scnt >= s) cout << "Yes" << endl;
    else cout << "No" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
