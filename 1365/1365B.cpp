#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n], ocnt = 0, zcnt = 0, c[n];
    for(ll i = 0; i < n; i++) cin >> a[i], c[i] = a[i];
    for(ll i = 0; i < n; i++) cin >> b[i], b[i] ? ocnt++: zcnt++;
    sort(c, c+n);
    if(ocnt && zcnt){
        cout << "yes" << endl;
        return;
    }ll cnt = 0;
    for(ll i = 0; i < n; i++) if(a[i] == c[i]) ++cnt;
    cout << (cnt == n ? "yes": "no") << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
