#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for(ll i = 0; i < n; i++) if(a[i] > b[i]){
        cout << -1 << endl;
        return;
    }
    set<ll> s[30];
    for(ll i = 0; i < n; i++) if(a[i] != b[i]){
        s[a[i] - 'a'].insert(b[i] - 'a');
    }
    ll cnt = 0;
    for(ll i = 0; i < 30; i++) if(s[i].size()){
        ++cnt;
        auto x = *s[i].begin();
        //cout << i << " her" << endl;
        for(auto &i: s[i]) {
            //cout << " sdfa "<< i << endl;
            if(i != x) s[x].insert(i);
        }
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
