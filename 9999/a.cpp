#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y, k, cnt = 0;
    cin >> x >> y >> k;
    cnt = (k*(y+1) - 1)/(x-1) + !!((k*(y+1) - 1)%(x-1));
    //cout << k*(y+1)-1 << " " << x-1<< " " << cnt << endl;
    cout << cnt+k << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
