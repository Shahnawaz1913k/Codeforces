#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(ll i = 1; i <= n; ++i) cin >> a[i];
    map<ll, vector<ll> > mp, mp2;
    for(ll i = 1; i <= n; ++i) {
        mp[a[i]].push_back(i);
    }
    map<ll, ll> mp3;
    set<ll> s;
    for(auto &i: mp){
        s.insert(i.first);
        i.second.push_back(0);
        i.second.push_back(n+1);
        sort(i.second.begin(), i.second.end());
        ll ma = 0;
        for(ll k = 1; k < i.second.size(); ++k) ma = max(ma, i.second[k] - i.second[k-1]);
        mp2[ma].push_back(i.first);
        //mp2[i.first] = ma;
    }
    ll b[n+1];
    for(ll i = n; i >= 1; i--){
        if(!s.size()) b[i] = -1;
        else {
            b[i] = *s.begin();
            for(auto &k: mp2[i]) if(s.find(k) != s.end()) s.erase(k);
        }
    }
    for(ll i = 1; i <= n; ++i) cout << b[i] << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
