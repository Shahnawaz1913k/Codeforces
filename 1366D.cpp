#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll lp[10000010];

void lpf(){
    ll n = 1e7;
   lp[1] = 1;
   for(ll i = 2; i < n; i++)if(!lp[i]){
       lp[i] = i;
       for(ll j = i*i; j <= n; j+=i) if(!lp[j]) lp[j] = i;
   }
}

void solve(){
    lpf();
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll b[n], c[n];
    for(ll i = 0; i < n; i++) b[i] = -1, c[i] = -1;
    for(ll i = 0; i < n; i++) {
        ll x = 1, y = lp[a[i]], val = a[i];
        while(val%y == 0) val/=y, x*=y;
        if(x == a[i]) continue;
        b[i] = x;
        c[i] = a[i]/x;
    }
    for(ll i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;
    for(ll i = 0; i < n; i++) cout << c[i] << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
