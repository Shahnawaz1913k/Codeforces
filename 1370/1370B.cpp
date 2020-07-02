#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void soe(){
    for (ll i = 2; i * i <= n; i++) {
    if (!is_prime[i]) continue;
    for (ll j = i * i; j <= n; j += i)   is_prime[j] = false;
}
}

void solve(){
    ll n, k;
    cin >> n;
    k = n;
    n*=2;
    ll a[n], v[n] = {0};
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        if(v[i]) continue;
        for(ll j = i+1; j < n; j++) {
            if(v[j]) continue;
            if((a[i] + a[j])%2 == 0) {
            cout <<i+1 << " " << j+1 << endl;
            v[i] = 10, v[j] = 10;
            ++cnt;
            if(cnt == k-1) return;
            break;
        }
        }
    } 
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
