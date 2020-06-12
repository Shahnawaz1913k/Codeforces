#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll b[200200];

void solve(){
    ll n, cnt = 1;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    b[0] = a[0];
    for(ll i = 1; i < n; i++) {
        auto it = lower_bound(b, b + cnt, a[i]);
        if(it == b + cnt) b[cnt++] = a[i];
        else *it = a[i];
    }
    cout << cnt <<  endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
