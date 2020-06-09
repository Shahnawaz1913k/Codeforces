#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll t[n], w[n], s1 = 0, s2 = 0;
    vector<ll> v1, v2;
    for(ll i = 0; i < n; i++) cin >> t[i] >> w[i], (t[i] == 1 ? (v1.push_back(w[i]), s1 += w[i]): (v2.push_back(w[i]), s2 += w[i]));
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    v1.push_back(0);
    v2.push_back(0);
    reverse(v2.begin(), v2.end());
    reverse(v1.begin(), v1.end());
    ll cnt = 0, mi = 99999999999999;
    for(ll i = 0; i < v1.size(); i++){
        s1-=v1[i];
        ll x = s2;
        for(ll j = 0; j < v2.size(); j++){
            x-=v2[j];
            //cout << i << " " << s1 << ":" << j << " " << x << endl;
            if(i + 2*j >= s1 + x && i + 2*j < mi) mi = min(mi, i + 2*j);
        }
    }
    cout << mi << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
