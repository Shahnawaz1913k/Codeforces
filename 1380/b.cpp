#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], sum = 0;
    for(ll i = 0; i < n; i++) cin >> a[i], sum += a[i];
    if(sum <= k){
        cout << 0 << endl; return;
    }
    sum = 0;
    ll pos = 0, ma = 0, i = 0;
    while(sum + a[i] <= k) sum+=a[i],++i;
    if(i < n-1) i++;
    for(ll x = 0; x <= i; x++) if(a[x] > ma) pos = x+1, ma = a[x];
    cout << pos << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
