#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    string s;
    cin >> s;
    n = s.length();
    vector<ll> v[10];
    for(ll i = 0; i < n; i++)  v[s[i] - '0'].push_back(i);
    for(ll i = 0; i < 10; i++) cnt = max(cnt, (ll)v[i].size()); 
    for(ll i = 0; i < 10; i++) 
        for(ll j = 0; j < 10; j++){
            if(i == j) continue;
            ll l = 0, r = 0;
            ll pos = 0;
            while(v[i].size() > l && v[j].size() > r) {
                if(pos%2 == 0){
                    ll indx = lower_bound(v[j].begin(), v[j].end(), v[i][l]) - v[j].begin();
                    r = indx;
                } else {
                    ll indx = lower_bound(v[i].begin(), v[i].end(), v[j][r]) - v[i].begin();
                    l = indx;
                }
                pos++;
            }
            if(pos%2) --pos;
           cnt = max(cnt, pos);
        }
    cout << max(0ll, n - cnt) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
