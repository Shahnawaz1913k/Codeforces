#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n+1] = {0}, p[n+2] = {0}, s[n+2] = {0}, np[n+2] = {0}, ns[n+2] = {0};
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) {
        p[i] = a[i] - p[i-1];
        np[i] = np[i-1] + (p[i] < 0);
    }
    for(ll i = n; i >= 1; i--) {
        s[i] = a[i] - s[i+1];
        ns[i] = ns[i+1] + (s[i] < 0);
    }
    /*
    for(ll i = 1; i <= n; i++) cout << p[i] << " ";
    cout << endl; 
    for(ll i = 1; i <= n; i++) cout << np[i] << " ";
    cout << endl; 
    for(ll i = 1; i <= n; i++) cout << s[i] << " ";
    cout << endl;
    */
    for(ll i = 1; i < n; i++){
        ll x = a[i], y = a[i+1];
        if(np[i-1] > 0 || ns[i+2] > 0) continue;
        //cout << i << " | " << p[i-1] << " " << x << " " << y << " " << s[i+2] <<  endl;
        if((x - p[i-1] == y - s[i+2] && x >= p[i-1]) || (y - p[i-1] == x - s[i+2] && y >= p[i-1])) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
