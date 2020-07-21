#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<ll> v;
    ll cnt = 0;
    ll f = 0, ba = n-1;
    for(ll i = n-1; i >= 0; --i) {
            ll val = (cnt%2 == 0 ? f++: ba--);
            if((b[n-1] == a[val] && cnt%2 == 0) || (cnt%2 && b[n-1] == a[val])) v.push_back(1);
            v.push_back(i+1);
        ++cnt;
    }
    cout << v.size() << " ";
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
