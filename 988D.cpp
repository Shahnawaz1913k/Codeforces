#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; ++i) cin >> a[i], mp[a[i]]++;
    sort(a, a+n);
    for(ll i = 0; i < n; ++i) {
        for(ll j = 0; j <= 31; ++j){
            ll x = 1<<j;
            if(mp[a[i] + x] && mp[a[i] - x]){
                cout << 3 << endl << a[i] - x << " " << a[i] << " " << a[i] + x;
                return;
            }
        }
    }
    for(ll i = 0; i < n; ++i) {
        for(ll j = 0; j <= 31; ++j){
            ll x = 1<<j;
            if(mp[a[i]+x]){
                cout << 2 << endl << a[i] << " " << a[i] + x << endl;
                return;
            }
        }
    }
    cout << 1 << endl << a[0] << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}