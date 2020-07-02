#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    if(k < n) {
        cnt = k*(k+1)/2;
    } else {
        cnt = 1;
        cnt += n*(n-1)/2;
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
