#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(ll i = 0; i < n; i++) cin >> a[i], --a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    sort(a, a+n, greater<ll>());
    ll indx = 0, cnt = 0;
    for(ll i = 0; i < n; i++){
        if(indx >= a[i]) cnt += b[a[i]];
        else {
            cnt += b[indx];
            ++indx;
        }
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
