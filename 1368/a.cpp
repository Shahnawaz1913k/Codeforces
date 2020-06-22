#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a, b, n, cnt = 0;
    cin >> a >> b >> n;
    while(max(a, b) <= n){
        if(a > b) swap(a, b);
        a += b;
        ++cnt;
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
