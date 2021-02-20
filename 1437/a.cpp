    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll l, r;
        cin >> l >> r;
        ll x = r+1;
        if(l*2 >= x && 2*r >= x) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
