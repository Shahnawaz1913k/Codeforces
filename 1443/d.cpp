#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll c[n] = {0};
    for(ll i = 0; i < n-1; i++) if(a[i] > a[i+1]) {
        c[0] += (a[i] - a[i+1]);
        c[i+1] -= (a[i] - a[i+1]); 
    }
    a[0] -= c[0];
    for(ll i = 1; i < n; i++) c[i] += c[i-1], a[i] -= c[i];
    for(ll i = 1; i < n; i++) if(a[i] < 0 || a[i-1] > a[i] || a[0] < 0){
        cout << "NO" << endl; return;
    }
    cout << "YES" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
