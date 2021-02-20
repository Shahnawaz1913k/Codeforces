#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    char mat[n][m];
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) cin >> mat[i][j];
    ll pre[n][m] = {0};
    for(ll i = 0; i < n; i++){
        pre[i][0] = (mat[i][0] == '*');
        for(ll j = 1; j < m; j++) pre[i][j] = pre[i][j-1] + (mat[i][j] == '*');
    }
    ll cnt = 0;
    for(ll i = 0; i < n; i++) for(ll j = 0; j < m; j++) if(mat[i][j] == '*'){
        ll x = 0;
        for(ll k = i; k < n; k++){
            ll dis = k - i;
            ll r = j + dis, l = j - dis;
            if(pre[k][r] - (l == 0 ? 0: pre[k][l-1]) == 2*dis + 1) ++cnt;
            else break;
        }
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
