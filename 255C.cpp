#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], ma = 0;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++){
        ll cnt = 1;
        for(ll j = i+1, k = i+1; j < n; ++j) {
            if(cnt%2 && a[j] == a[k]) ++cnt;
            else if(cnt%2 == 0 && a[j] == a[i]) ++cnt;
        }
        ma = max(ma, cnt);
    }
    cout << ma << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
