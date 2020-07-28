#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll check(vector<ll> v, ll ma, ll x, ll k, ll y){
    ll n = v.size(), cnt = 0;
    if(!n) return 0;
    sort(v.begin(), v.end());
    if(v[n-1] > ma && n < k) return -1;
    bool val = (v[n-1] < ma ? true:false);
    cnt += (n%k)*y;
    n -= n%k;
    if(!n) return cnt;
    if(y*k >= x) cnt += (n/k*x);
    else if(val) cnt += n*y;
    else cnt += (n-k)*y + x;
    return cnt;
}

void solve(){
    ll n, m, x, k, y;
    cin >> n >> m >> x >> k >> y;
    ll a[n], b[m];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    ll prev = -1;
    vector<ll> v;
    ll cnt = 0, ki = 0;
    for(ll i = 0; i < n; i++) {
        if(a[i] != b[ki]) v.push_back(a[i]);
        else{
            ll ma = max(prev, a[i]), xi = check(v, ma, x, k, y);
            if(xi == -1){
                cout << -1 << endl;
                return;
            } else  cnt+=xi;
            v.clear();
            prev = a[i], ++ki;
        }
    }
    if(ki < m) cout << -1 << endl;
    else{
        ll xi = check(v, prev, x, k, y);
        if(xi == -1){
            cout << -1 << endl;
            return;
        } else  cnt+=xi;
        cout << cnt << endl;
    }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
