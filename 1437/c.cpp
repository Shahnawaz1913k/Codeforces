    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    ll fact[1010], inv[1010], sx, mod = 1e9 + 7;

    ll fexpo(ll x, ll y){
        ll res = 1;
        while(y){
            if(y&1) res = res*x%mod;
            y/=2;
            x = x*x%mod;
        } return res;
    }

    void f(){
        fact[0] = 1;
        for(ll i = 1; i <= 1010; i++) fact[i] = i*fact[i-1]%mod;
        inv[1001] = fexpo(fact[1001], mod-2);
        for(ll i = 1000; i >= 0; i--) inv[i] = fexpo(fact[i], mod-2);
            //inv[i] = inv[i+1]*(i+1)%mod;
    }

    ll comb(ll n, ll m){
        if(n < m) return 0;
        ll res = (fact[n]*inv[n-m]%mod);
        return res;
    }

    void solve() {
        f();
        ll n, x, pos;
        cin >> n >> x >> pos;
        ll l = 0, r = n, mid, a[n] = {0};
        while(l < r){
            mid = (l+r)/2;
            if(mid <= pos) l = mid+1, a[mid] = -1;
            else r = mid, a[mid] = 1;
        }
        a[pos] = 2;
        ll cntp = 0, cntn = 0;
        for(ll i = 0; i < n; i++) a[i] == 1 ? cntp++: (a[i] == -1 ? cntn++:0);
        ll cnt = fact[n-1 - (cntp+cntn)];
        ll totalp = n - x, totaln = x - 1;
        cnt = (cnt*comb(n-x, cntp)%mod)*comb(x-1, cntn)%mod;
        cout << cnt << endl;
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      //ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
