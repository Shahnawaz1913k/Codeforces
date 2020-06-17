#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, q;
    cin >> n >> q;
    ll r[n+10], k[n+10];
    multiset<ll> ms[200200], s;
    for(ll i = 1; i <= n; i++){
        cin >> r[i] >> k[i];
        ms[k[i]].insert(r[i]);
    }
    /*
    for(ll i = 1; i <= n; i++) if(ms[i].size()) s.insert(*ms[r[i]].rbegin());
    cout << *s.begin() << endl;
    while(q--){
        ll x, nk;
        cin >> x >> nk;
        ms[x].erase(r[x]);
        if(ms[x].size()){
            if(*ms[x].rbegin() < r[x]) s.erase(r[x]);
        } else s.erase(r[x]);
        if(ms[nk].size()){
            if(*ms[nk].rbegin() < r[x]) s.erase(*ms[nk].rbegin());
        } else s.insert(r[x]);
        ms[nk].insert(r[x]);
        cout << *s.begin() << endl;
    }
    */
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
