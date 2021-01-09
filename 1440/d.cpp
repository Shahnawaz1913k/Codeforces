    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll n, cnt = 0; string s;
        cin >> n >> s;
        ll a[n];
        set<ll> s0, s1;
        for(ll i = 0; i < n; i++)  {
            if(s[i] == '0'){
                if(s1.size() == 0) a[i] = ++cnt, s0.insert(cnt);
                else{
                    auto x = *s1.begin();
                    s1.erase(x);
                    a[i] = x;
                    s0.insert(x);
                }
            } else {
                if(s0.size() == 0) a[i] = ++cnt, s1.insert(cnt);
                else{
                    auto x = *s0.begin();
                    s0.erase(x);
                    a[i] = x;
                    s1.insert(x);
                }
            }
        }
        cout << cnt << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }