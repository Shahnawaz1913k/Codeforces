#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct{
    
    ll bit[1000010];

    void add(ll indx, ll val){
        for(++indx; indx < 1000010; indx += indx&-indx) bit[indx] += val;
    }

    void rangeAdd(ll l, ll r, ll val){
        add(l, val); add(r + 1, -val);
    }

    ll pointQuery(ll indx){
        ll ret = 0;
        for(++indx; indx > 0; indx -= indx&-indx) ret += bit[indx];
        return ret;
    }
} f0;


void solve(){
    ll n;
    cin >> n;
    ll a[n], pre[n], suf[n], cnt = 0;
    map<ll, ll> mp1, mp2;
    for(ll i = 0; i < n; i++) cin >> a[i], pre[i] = ++mp1[a[i]];
    for(ll i = n-1; i >= 0; i--) {
        suf[i] = ++mp2[a[i]];
        cnt += f0.pointQuery(pre[i]-1);
        f0.add(suf[i], 1);
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
