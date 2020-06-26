#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], sum = 0;
    for(ll i = 0; i < n; i++) cin >> a[i], (i%2 ? 0:sum+=a[i]);
    ll cur = 0, cnt = 0;
    for(ll i = 0; i < n-1; i+=2){
        cur += (a[i+1] - a[i]);
        if(cur < 0) cur = 0;
        cnt = max(cnt, cur);
    } cur = 0;
    for(ll i = 1; i < n-1; i+=2){
        cur += (a[i] - a[i+1]);
        if(cur < 0) cur = 0;
        cnt = max(cnt, cur);
    }
    cout << sum + cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
