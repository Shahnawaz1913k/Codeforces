#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

set<ll> s;
ll b[200020];

ll fnext(ll x){
    auto indx = s.lower_bound(x);
    if(indx == s.end()) return -1;
    else return *indx;
}

void solve(){
    ll n;
    cin >> n;
    ll a[n+1];
    for(ll i = 1; i <= n; ++i) cin >> a[i], s.insert(i);
    ll m, t, x, y;
    cin >> m;
    while(m--){
        cin >> t >> x;
        if(t == 2) cout << b[x] << endl;
        else{
            cin >> y;
            ll i = fnext(x);
            while(i <= n){
                if(b[i] + y <= a[i]) { b[i]+=y; break; } 
                else{
                    y -= (a[i] - b[i]);
                    b[i] = a[i];
                    s.erase(i);
                    i = fnext(i);
                    if(i == -1) break;
                }
            }
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
