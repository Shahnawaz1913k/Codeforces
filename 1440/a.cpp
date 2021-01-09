    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll n, c0, c1, h, cnt0 = 0, cnt1 = 0;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;
        for(ll i = 0; i < n; i++) s[i] == '0' ? ++cnt0: ++cnt1;
        ll cnt = min({c0*cnt0 + c1*cnt1, cnt0*h + n*c1, n*c0 + cnt1*h});
        //cout << cnt1 << " -" << cnt0 << " " << h << endl;
        //cout <<  c0*cnt0 + c1*cnt1 << " " <<  cnt0*h + n*c1 << " " <<  n*c0 + cnt1*h << endl;
        cout << cnt << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
