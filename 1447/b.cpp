#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll sum = 0, neg = 0, x, cnt = 0;
    vector<ll> v;
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> x, (x < 0 ? neg++:0), sum += abs(x), v.push_back(abs(x));
    sort(v.begin(), v.end());
    cnt = sum;
    if(neg%2) cnt -= 2*v[0];
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
