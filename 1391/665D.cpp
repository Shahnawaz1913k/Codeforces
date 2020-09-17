#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll x[3000000];

void soe(){
    for(ll i = 2; i < 2000200; ++i){
        if(x[i]) continue;
        for(ll j = 2*i; j < 2000200; j+=i) x[j] = 10;
    }
}

void solve(){
    soe();
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for(ll i = 0; i < n; ++i) cin >> a[i], mp[a[i]]++;
    if(mp[1]) for(ll i = 0; i < n; i++) if(!x[1 + a[i]] && a[i] != 1){
        cout << mp[1] + 1 << endl << a[i] << " ";
        for(ll i = 0; i < mp[1]; ++i) cout << "1 ";
        return;
    }
    if(mp[1] > 1){
        cout << mp[1] << endl;
        for(ll i = 0; i < mp[1]; ++i) cout << "1 ";
        return;
    }
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; ++j) if(a[i] != a[j]){
            if(x[a[i] + a[j]]) continue;
            cout << 2 << endl;
            cout << a[i] << " " << a[j] << endl;
            return;
        }
    cout << 1 << endl << a[0] << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}