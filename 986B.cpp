#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll bit[1000100] ;

void add(int idx, int val) {
    for (++idx; idx < 1000100; idx += idx & -idx)
        bit[idx] += val;
}

void range_add(int l, int r, int val) {
    add(l, val);
    add(r + 1, -val);
}

int point_query(int idx) {
    int ret = 0;
    for (++idx; idx > 0; idx -= idx & -idx)
        ret += bit[idx];
    return ret;
}

void solve(){
    ll n, cnt = 0;
    cin >> n;
    ll x;
    for(ll i = 1; i <= n; ++i){
        cin >> x;
        cnt += point_query(x);
        range_add(1, x, 1);
    }
    cout << ((cnt%2 == (3*n)%2) ? "Petr":"Um_nik") << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}