#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll c[n], a[n], b[n], cnt = 0;
    for(ll i = 0; i < n; i++) cin >> c[i];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    ll pre[n] = {0};
    for(ll i = 1; i < n; i++){
        if(a[i] == b[i]) pre[i] = c[i] + 1;
        else {
            pre[i] = c[i] + 1 + max(pre[i-1] - abs(a[i] - b[i]), abs(a[i] - b[i]));
        }
        cnt = max(cnt, pre[i]);
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
