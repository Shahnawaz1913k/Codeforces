    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    void solve() {
        ll n, k;
        cin >> n >> k;
        ll a[n*k];
        for(ll i = 0; i < n*k; i++) cin >> a[i];
        sort(a, a+n*k);
        ll pos, sum = 0;
        if(n%2 == 0){
            pos =  n/2 + 1;
        } else pos = n - ceil(n*1.0/2) + 1;
        //cout << "pos " << pos << endl;
        ll indx = 0, cnt = 0;
        for(ll i = n*k-1; i >= 0; i--){
            indx++;
            if(indx == pos) {
                //cout << "median " << a[i] << endl;
                cnt += a[i], indx = 0, ++sum;
            }
            if(sum == k) break;
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
