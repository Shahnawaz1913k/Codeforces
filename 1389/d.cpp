#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll val(ll li, ll k, ll n){
    ll cnt = 0;
    if(li*n >= k) cnt += k;
    else {
            k -= li*n;
            cnt += (li*n + 2*k);
    }
    return cnt;
}

void solve(){
    ll n, k, l1, r1, l2, r2, cnt = 0;
    cin >> n >> k >> l1 >> r1 >> l2 >> r2;
    if(r1 >= l2){
        ll in = abs(max(l1, l2) - min(r1, r2));
        ll li = max(r1, r2) - min(l1, l2) - in;
        if(k > n*in) cout << val(li, k - n*in, n) << endl;
        else cout << 0 << endl;
    } else {
        ll d = l2 - r1, cnt = 9999999999999999;
        for(ll i = 1; i <= n; ++i) cnt = min(cnt, val(max(r2, r1) - min(l1, l2), k, i) + i*d);
        cout << cnt <<endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
