#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

set<ll> s;
multiset<ll> ms;

void add(ll x){
            auto i = s.find(x);
            if(next(i) != s.end()) ms.erase(ms.find(*next(i) - x));
            if(i != s.begin()){
                ms.erase(ms.find(x - *prev(i)));
                if(next(i) != s.end()) ms.insert(*next(i) - *prev(i));
            }
            s.erase(x);
}

void remove(ll x){
            s.insert(x);
            auto i = s.find(x);
            if(next(i) != s.end()) ms.insert(*next(i) - x);
            if(i != s.begin()){
                ms.insert(x - *prev(i));
                if(next(i) != s.end()) ms.erase(ms.find(*next(i) - *prev(i)));
            }
}

void solve(){
    ll n, q;
    cin >> n >> q;
    ll a[n];
    for(ll i = 0; i < n; ++i) cin >> a[i], s.insert(a[i]);
    sort(a, a+n);
    for(ll i = 1; i < n; ++i) ms.insert(a[i] - a[i-1]);
    ll dis = 0;
    if(ms.size()) dis = *s.rbegin() - *s.begin() - *ms.rbegin();
    cout << dis << endl;
    while(q--){
        ll t, x;
        cin >> t >> x;
        if(!t) add(x);
        else remove(x);
        dis = 0;
        if(ms.size()) dis = *s.rbegin() - *s.begin() - *ms.rbegin();
        cout << dis << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
