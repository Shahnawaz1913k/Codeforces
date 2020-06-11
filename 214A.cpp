#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m, cnt = 0;
    cin >> n >> m;
    for(ll i = 0; i < 1001; i++)
        for(ll j = 0; j < 1001; j++) if(i*i + j == n && i + j*j == m) ++cnt;
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
