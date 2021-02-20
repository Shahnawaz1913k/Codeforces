#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll pre[100010], a[100010];
map<ll, ll> mp;

void div(ll l, ll r, ll n){
    mp[pre[r] - pre[l-1]]++;
    //cout << "enret " << l << " " << r << endl;
    //cout << pre[r] - pre[l-1] << endl;
    if(a[l] == a[r])   return;
    ll mid = (a[r]+a[l])/2;
    ll indx = upper_bound(a, a+n, mid) - a;
    //cout << pre[r] - pre[l-1] << " | " << mid << " - " << indx << endl;
    div(l, indx - 1, n);
    div(indx, r, n);
}

void solve(){
    ll n, q;
    cin >> n >> q;
    mp.clear();
    for(ll i = 1; i <= n; i++) cin >> a[i];
    sort(a, a+n+1);
    for(ll i = 1; i <= n; i++) pre[i] = pre[i-1] + a[i];
    div(1ll, n, n);
    while(q--){
        ll x;
        cin >> x;
        cout << (mp[x] ? "YES":"NO") << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
