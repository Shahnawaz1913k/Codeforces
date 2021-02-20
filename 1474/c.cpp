#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    n = 2*n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll x = a[n-1], indx = -1;
    multiset<ll> ms;
    for(ll i = 0; i < n-1; i++) ms.insert(a[i]);
    for(ll i = n-2; i >= 0; --i){
        ll val = a[n-1];
        multiset<ll> ms1 = ms;
        ms1.erase(ms1.find(a[i]));
        while(ms1.size()){
            ll last = *ms1.rbegin();
            ms1.erase(ms1.find(last));
            if(ms1.find(val - last) == ms1.end()) break;
            ms1.erase(ms1.find(val - last));
            val = last;
        }
        if(ms1.size() == 0) {indx = i; break;}
    }
    if(indx == -1) cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        cout << a[n-1] + a[indx] << endl;
        ll val = a[n-1];
        multiset<ll> ms1 = ms;
        cout << a[n-1] << " " << a[indx] << endl;
        ms1.erase(ms1.find(a[indx]));
        while(ms1.size()){
            ll last = *ms1.rbegin();
            ms1.erase(ms1.find(last));
            if(ms1.find(val - last) == ms1.end()) break;
            ms1.erase(ms1.find(val - last));
            cout << last << " " << val - last << endl;
            val = last;
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
