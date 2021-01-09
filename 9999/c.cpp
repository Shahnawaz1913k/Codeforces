#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n+10] = {0}, cnt = 0;
    for(ll i = 0; i < n; ++i) cin >> a[i];
    ll cc = 0;
    for(ll i = 0; i < n; ++i) {
        if(a[i]) ++cc;
        else{
            cnt += cc/3;
            cc = 0;
        }
    }
    cnt += cc/3;
    cc = 0;
    for(ll i = 0; i < n; ++i) {
        if(a[i]) ++cc;
        else break;
    }
    cout << cnt + (cc%3 ? a[0]:0) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
