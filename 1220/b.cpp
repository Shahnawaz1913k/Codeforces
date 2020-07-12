#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n][n], r[n];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < n; j++) cin >> a[i][j];
    for(ll i = 0; i < n; i++){
        r[i] = sqrt(a[i][(n+i-1)%n]*a[i][(i+1)%n]/a[(n+i-1)%n][(i+1)%n]);
    }
    for(ll i = 0; i < n; i++) cout << r[i] << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
