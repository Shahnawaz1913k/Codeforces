#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++) cin >> a[i][j];
    ll rcnt = 0, ccnt = 0;
    for(ll i = 0; i < n; i++){
        ll x = 0;
        for(ll j = 0; j < m; j++) a[i][j] ? ++x:0;
        rcnt += !x;
    }
    for(ll j = 0; j < m; j++){
        ll x = 0;
        for(ll i = 0; i < n; i++) a[i][j] ? ++x:0;
        ccnt += !x;
    }
    //cout << rcnt << " " << ccnt << endl;
    cout << (min(rcnt, ccnt)%2 ? "Ashish" : "Vivek")<< endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
