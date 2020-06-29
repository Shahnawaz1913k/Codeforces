#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll x[n], y[n], px = 0, py = 0, cnt = 0;
    for(ll i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        //if(px == x[i] && py == y[i]) continue;
        if(px == py) px++, py++;
        ll xx = max(0ll, min(x[i], y[i]) - px + 1), yy = max(0ll, min(x[i], y[i]) - py + 1);
        //cout << xx << " fdsa " << yy << endl;
        cnt += min(xx, yy);
        px = x[i], py = y[i];
    }
    cout << cnt+1 << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
