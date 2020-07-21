#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < m; i++) cin >> b[i];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++) if(a[i] == b[j]){
            cout << "YES" << endl << 1 << " " << a[i] << endl;
            return;
        }
    cout << "NO" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
