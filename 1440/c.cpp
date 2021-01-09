    #include <bits/stdc++.h>
    typedef long long ll;
    using namespace std;

    vector<vector<ll> > v;

    vector<ll> move1(ll x, ll y){
        vector<ll> vec;
        vec.push_back(x), vec.push_back(y);
        vec.push_back(x), vec.push_back(y+1);
        vec.push_back(x+1), vec.push_back(y+1);
        return vec;
    }

    vector<ll> move2(ll x, ll y){
        vector<ll> vec;
        vec.push_back(x), vec.push_back(y+1);
        vec.push_back(x+1), vec.push_back(y+1);
        vec.push_back(x+1), vec.push_back(y);
        return vec;
    }

    vector<ll> move3(ll x, ll y){
        vector<ll> vec;
        vec.push_back(x+1), vec.push_back(y+1);
        vec.push_back(x+1), vec.push_back(y);
        vec.push_back(x), vec.push_back(y);
        return vec;
    }

    vector<ll> move4(ll x, ll y){
        vector<ll> vec;
        vec.push_back(x+1), vec.push_back(y);
        vec.push_back(x), vec.push_back(y);
        vec.push_back(x), vec.push_back(y+1);
        return vec;
    }

    void check(ll a[][2], ll x, ll y){
        if(!a[0][1] && !a[1][1]) return;
        if(a[0][1] && a[1][1]) {
            v.push_back(move3(x, y));
            v.push_back(move4(x, y));
            return;
        }
        if(a[0][1]){
            v.push_back(move1(x, y));
            v.push_back(move2(x, y));
            v.push_back(move4(x, y));
        } else {
            v.push_back(move2(x, y));
            v.push_back(move1(x, y));
            v.push_back(move3(x, y));
        }
    }
    void solve() {
        v.clear();
        ll n, m;
        cin >> n >> m;
        char x[n][m];
        ll a[n][m];
        for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> x[i][j], a[i][j] = x[i][j] - '0';
        for(ll i = 0; i < n-2; i++) for(ll j = 0; j < m-1; j++) {
            if(!a[i][j] && !a[i][j+1]) continue;
            ll cnt = 0;
            vector<ll> vec;
            if(a[i][j]){
                a[i][j] = 0; ++cnt;
                vec.push_back(i);
                vec.push_back(j);
            }
            if(a[i][j+1]){
                a[i][j+1] = 0; ++cnt;
                vec.push_back(i);
                vec.push_back(j+1);
            }
            ++cnt;
            a[i+1][j] = !a[i+1][j];
                vec.push_back(i+1);
                vec.push_back(j);
            if(cnt < 3) {
                a[i+1][j+1] = !a[i+1][j+1];
                vec.push_back(i+1);
                vec.push_back(j+1);
            }
            v.push_back(vec);
        }
        ll i = n-2;
        for(ll j = 0; j < m-1; j++){
            //cout << "entered" << endl;
            if(!a[i][j] && !a[i+1][j]) continue;
            ll cnt = 0;
            vector<ll> vec;
            if(a[i][j]){
                a[i][j] = 0; ++cnt;
                vec.push_back(i);
                vec.push_back(j);
            }
            if(a[i+1][j]){
                a[i+1][j] = 0; ++cnt;
                vec.push_back(i+1);
                vec.push_back(j);
            }
            ++cnt;
            a[i][j+1] = !a[i][j+1];
                vec.push_back(i);
                vec.push_back(j+1);
            if(cnt < 3) {
                a[i+1][j+1] = !a[i+1][j+1];
                vec.push_back(i+1);
                vec.push_back(j+1);
            }
            v.push_back(vec);
        }
        /*
        cout << " here " << endl;
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < m; j++) cout << a[i][j];
            cout << endl;
        } 
        */
        ll b[2][2];
        for(ll i = n-2; i < n; i++) for(ll j = m-2; j < m; j++) b[i - (n-2)][j - (m-2)] = a[i][j];
        check(b, n-2, m-2);
        cout << v.size() << endl;
        for(auto &k: v){
            for(auto &i: k) cout << i+1 << " ";
            cout << endl;
        }
    }

    int main() {
      cin.sync_with_stdio(0); cin.tie(0);
      cin.exceptions(cin.failbit);
      ll ti;   cin >> ti;  while(ti--)
      solve();
      return 0;
    }
