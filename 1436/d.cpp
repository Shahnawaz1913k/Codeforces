    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    vector<ll> adj[200020];

    struct{
        ll maxi = 0, sum = 0, cnt = 0;
    } xx[200020];

    void solve() {
        ll n;
        cin >> n;
        for(ll i = 2; i <= n; i++){
            ll x;
            cin >> x;
            adj[x].push_back(i);
        }
        for(ll i = 1; i <= n; i++) {
            ll x;
            cin >> x;
            xx[i].sum = x;
            if(!adj[i].size()) xx[i].cnt = 1, xx[i].maxi = xx[i].sum;
        }
        ll cnt = 0;
        for(ll i = n; i >= 1; i--){
            ll sz = adj[i].size(); 
            if(!sz)  continue;
            ll ma = 0;
            for(auto &k: adj[i]) xx[i].sum += xx[k].sum, ma = max(ma, xx[k].maxi), xx[i].cnt += xx[k].cnt;
            xx[i].maxi = max(ma,  (ll)ceil(xx[i].sum*1.0/xx[i].cnt));
            //cout << i << " | " << xx[i].maxi << " " << xx[i].sum << " " << xx[i].cnt << endl;
        }
        cout << xx[1].maxi << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      //ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
