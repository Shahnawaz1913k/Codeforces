#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    if(n > 60){
        cout << 1 << endl;
        return;
    }
    ll cnt = 999999999;
    for(ll l = 0; l < n; l++){
        for(ll m = l; m < n; m++){
            for(ll r = m+1; r < n; r++){
                ll x = 0, y = 0;
                for(ll i = l; i <= m; i++) x^=a[i];
                for(ll i = m+1; i <= r; i++) y^=a[i];
                if(x > y) cnt = min(cnt, r - l - 1);
            }
        }
    }
    cout << (cnt == 999999999 ? -1: cnt) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
