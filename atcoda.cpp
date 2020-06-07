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
    for(ll i = 0; i < n; i++) {
        ll val = 10;
        for(ll j = 0; j < m; j++) if(a[i][j] == 1) val = 0;
        //cout << i << "hred " << val << endl;
        val ? ++rcnt:0;
    }
    for(ll i = 0; i < m; i++) {
        ll val = 10;
        for(ll j = 0; j < n; j++) if(a[j][i] == 1) val = 0;
        //cout << i << "hred " << val << endl;
        val ? ++ccnt:0;
    }
    //cout << rcnt << " " << ccnt << endl;
    cout << (min(rcnt, ccnt)%2 == 0 ? "Vivek":"Ashish") << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
