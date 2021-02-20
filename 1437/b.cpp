    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll n;
        cin >> n;
        string s, st1, st2;
        cin >> s;
        for(ll i = 0; i < n; i++){
            st1 += (i%2 == 0 ? '0':'1');
            st2 += (i%2 != 0 ? '0':'1');
        }
        ll cnt1 = 0, x = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == st1[i]) {
                x = 0; 
            } else {
                if(x == 0) ++cnt1;
                x = 1;
            }
        }
        ll cnt2 = 0;
        x = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == st2[i]) {
                x = 0; 
            } else {
                if(x == 0) ++cnt2;
                x = 1;
            }
        }
        //cout << cnt1 << " " << cnt2 << endl;
        cout << min(cnt1, cnt2) << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
