#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll s, n;
    cin >> s >> n;
    pair<ll,ll> p[n];
    for(ll i = 0; i < n; i++) cin >> p[i].first >> p[i].second, p[i].second*=-1;
    sort(p, p+n);
    for(ll i = 0; i < n; i++){
        if(s <= p[i].first){
           cout << "NO" << endl;
           return;
        } s-=p[i].second;
    }
    cout << "YES" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
