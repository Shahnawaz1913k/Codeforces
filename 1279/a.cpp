#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a[3];
    for(ll i = 0; i < 3; i++)cin >> a[i];
    sort(a, a+3);
    cout << (a[2] > a[0] + a[1] + 1 ? "no":"yes") << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
