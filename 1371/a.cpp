#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 1;
    cin >> n;
    n = (n-1)/2;
    cnt+=n;
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
