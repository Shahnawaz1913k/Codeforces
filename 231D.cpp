#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y, z, x1, y1, z1, a[6], cnt = 0;
    cin >> x >> y >> z >> x1 >> y1 >> z1;
    for(ll i = 0; i < 6; i++) cin >> a[i];
    if(z < 0) cnt += a[2];
    if(z > z1) cnt += a[3];
    if(y < 0) cnt += a[0];
    if(y > y1) cnt += a[1];
    if(x < 0) cnt += a[4];
    if(x > x1) cnt += a[5];
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
