    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll n, m;
        cin >> n >> m;
        ll a[n], cnt = 0;
        for(ll i = 0; i < n; i++) cin >> a[i], cnt+=a[i];
        cout << (cnt == m ?"YES":"NO") << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
