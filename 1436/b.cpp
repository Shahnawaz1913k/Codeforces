    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    ll prime[100010];

    void f(){
        for(ll i = 2; i <= 100010; i++){
            if(prime[i]) continue;
            for(ll j = 2*i; j <= 100010; j+=i) prime[j] = 1;
        }
    }

    void solve() {
        ll n;
        cin >> n;
        ll a[n][n];
        for(ll i = 0; i < n-1; i++) for(ll j = 0; j < n-1; j++) a[i][j] = 1;
        ll val = n-1, cnt = 0;
        for(ll i = 2; i <= 100000; i++)if(!prime[i] && i > val){
            if(prime[i - val] == 0 || i - val < 2) continue;
            cnt =  i - val;
            break;
        }
        for(ll i = 0; i < n-1; i++) a[n-1][i] = cnt, a[i][n-1] = cnt;
        ll sec = 0;
        val = (n-1)*cnt;
        for(ll i = 2; i <= 100000; i++)if(!prime[i] && i > val){
            if(prime[i - val] == 0 || i - val < 2) continue;
            sec =  i - val;
            break;
        }
        a[n-1][n-1] = sec;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++) cout << a[i][j] << " ";
                cout << endl;
        }
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      f();
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
