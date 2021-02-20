#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll pos = -1;
    for(ll i = n; i >= 1; i--) if(a[i-1] != i){
        pos = i;
        break;
    }
    double cnt = 1;
    for(ll i = 0; i < m; i++){
        ll x; double y;
        cin >> x >> y;
        if(x < pos || pos == -1) continue;
        cout << "hey" << endl;
        cnt *= (1 - y);
    }
    double res = 1 - cnt;
    cout << fixed  << setprecision(10) << (pos == -1 ? 1:res) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
