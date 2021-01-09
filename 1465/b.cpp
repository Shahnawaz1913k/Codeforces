#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll k1 = n/2;
    ll k2 = n - k1;
    ++k1, ++k2;
    if(n%2) cout << 2*k1*k2 << endl;
    else cout << k1*k2 << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
