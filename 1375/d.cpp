#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

pair<ll, ll> mex(ll a[], ll n){
    ll b[n];
    for(ll i = 0; i < n; i++) b[i] = a[i];
    sort(b, b+n);
    ll cnt = 0, indx = -1;
    for(ll i = 0; i < n; i++) {
        b[i] == cnt ? ++cnt:0;
        if(indx < 0 && a[i] != i) indx = i;
    }
    return {indx, cnt};
}

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    vector<ll> v;
    for(ll i = 0; i < n; i++){
        pair<ll, ll> m = mex(a, n);
        if(m.first == -1)  break;
        if(m.second < n) if(a[m.second] != m.second){
            v.push_back(m.second+1);
            a[m.second] = m.second;
            continue;
        }
        v.push_back(m.first+1);
        a[m.first] = m.second;
    }
    for(ll i = 0; i < n; i++){
        pair<ll, ll> m = mex(a, n);
        if(m.first == -1)  break;
        if(m.second < n) if(a[m.second] != m.second){
            v.push_back(m.second+1);
            a[m.second] = m.second;
            continue;
        }
        v.push_back(m.first+1);
        a[m.first] = m.second;
    }
    cout << v.size() <<endl;
    for(auto &i: v) cout << i << " ";
    cout << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
