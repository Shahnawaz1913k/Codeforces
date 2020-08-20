#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll calc(vector<ll> &a, ll x){
    ll cnt = 0;
    for(auto &i: a) if(x < i && i <= 2*x) ++cnt;
    return cnt;
}

ll c2(ll x){
    return x*(x-1)/2;
}

ll c3(ll x){
    return x*(x-1)*(x-2)/6;
}

void solve(){
    ll g, d, f, cnt = 0;
    cin >> g >> d >> f;
    vector<ll> a(g), b(d), c(f);
    for(ll i = 0; i < g; ++i) cin >> a[i];
    for(ll i = 0; i < d; ++i) cin >> b[i];
    for(ll i = 0; i < f; ++i) cin >> c[i];
    for(auto &i: a) cnt += c2(calc(b, i))*c3(calc(c, i));
    for(auto &i: b) cnt += calc(a, i)*calc(b, i)*c3(calc(c, i));
    for(auto &i: c) cnt += calc(a, i)*c2(calc(b, i))*c2(calc(c, i));
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}