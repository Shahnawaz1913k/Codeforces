#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    char c;
    vector<pair<ll, ll>> p(n);
    for(ll i = 0; i < n; i++) cin >> p[i].first >> c >> p[i].second;
    sort(p.begin(), p.end());
    p.push_back({p[0].first+24, p[0].second});
    for(ll i = 1; i < n+1; i++){
        ll h = p[i].first - p[i-1].first, cm = p[i].second, pm = p[i-1].second, m = 0;
        ++pm;
        if(pm+1 > cm) --h, m = (60+cm - pm);
        else m = cm - pm;
        cnt = max(cnt, 100*h + m);
        // cout << cm << " - " << pm <<endl;
        // cout << i << " " << h << " " << m << " " << 100*h + m << endl;
    }
    if(cnt/1000 == 0) cout << '0';
    cout << cnt/100 <<":" << cnt%100 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
//   ll t;cin>>t;while(t--)
  solve();
  return 0;
}