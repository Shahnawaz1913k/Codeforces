#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n][m], b[n][m];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++) cin >> a[i][j];

    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++){
            if(i == 0 || i == n-1 || j == 0 || j == m-1) b[i][j] = 3;
            else b[i][j] = 4;
        }
    b[0][0] = b[0][n-1] = b[n-1][0] = b[n-1][m-1] = 2;
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++)if(a[i][j] > b[i][j]){
            cout << "no" << endl;
            return;
        }
    cout << "yes" << endl;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++) cout << b[i][j] << " ";
        cout << endl;
    }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
