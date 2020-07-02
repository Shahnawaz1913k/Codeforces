#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, p;
    cin >> n >> p;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    vector<ll> v;
    for(ll i = 1; i < a[n-1]; i++){
        ll cnt = 0, val = i, ocnt = 0;
        for(ll j = 0; j < n; ++j){
            while(a[j] <= val && j < n) {
                ++cnt, ++j;
                if(j >= n) break;
            }
            cout << i << " " << val << " " << cnt << endl;
            val++;
            if(cnt%p == 0) {cnt = 0; break;}
            if(j < n)--cnt, --j;
        }
        if(cnt > 0 && cnt < p) v.push_back(i);
    }
    cout << v.size() << endl;
    for(auto &i: v) cout << i << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
