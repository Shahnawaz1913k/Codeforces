    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    vector<ll> adj[200020];
    ll d[200020];

    void solve() {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++) cin >> a[i];
        queue<ll> q;
        q.push(1);
        ll x = 1, cnt = 0;
        for(ll i = 1; i < n; i++){
            if(a[i] > a[i-1]) {
                //adj[x].push_back(a[i]);
                d[a[i]] = d[x] + 1;
                q.push(a[i]);
            } else {
               q.pop();
               x = q.front();
               //adj[x].push_back(a[i]);
               d[a[i]] = d[x] + 1;
               q.push(a[i]);
            }
            cnt = max(cnt, d[a[i]]);
        }
        cout << cnt << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
