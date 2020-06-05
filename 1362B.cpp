//https://codeforces.com/contest/1362/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for(ll i = 1; i <= 1024; i++) {
        vector<ll> b(n);
        for(ll j = 0; j < n; j++) b[j] = a[j]^i;
        sort(b.begin(), b.end());
        if(a == b){
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
