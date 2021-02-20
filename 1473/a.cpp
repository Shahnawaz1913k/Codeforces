#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, d;
    cin >> n >> d;
    ll a[n], cnt = 0;
    for(ll i = 0; i < n; i++) cin >> a[i]; 
    sort(a, a+n);
    for(ll i = 0; i < n; i++) {
        if(i >= 2) a[i] = min(a[i], a[0] + a[1]);
        (a[i] <= d ? ++cnt:0);
    }
    if(cnt == n) cout << "yes" << endl;
    else cout << "no" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
