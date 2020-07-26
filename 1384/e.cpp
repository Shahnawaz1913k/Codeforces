#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 1;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for(ll i = 1; i < n; i++) if(a[i-1]*2 >= a[i]) ++cnt;
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
