#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    if(n <= k){
        ll cnt = ceil(k*1.0/n);
        cout << cnt << endl;
    } else {
        ll val = ceil(n*1.0/k);
        ll cnt = ceil(val*k*1.0/n);
        cout << cnt << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
