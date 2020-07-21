#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll cnt = 0, flag = 0;
    ll x = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] != 1) flag = 10;
        if(a[i] == 1 && !flag){
            cnt ^= 1;
        }
    }
    if(!flag)  cout << (cnt ? "First" : "Second") << endl;
    else cout << (cnt == 0 ? "First" : "Second") << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
