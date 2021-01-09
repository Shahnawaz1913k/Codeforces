#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n >> x;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) cin >> b[i];
    sort(a, a+n); sort(b, b+n, greater<ll>());
    for(ll i = 0; i < n; i++) if(a[i] + b[i] > x){
        cout << "No" << endl; return;
    }
    cout << "Yes" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
