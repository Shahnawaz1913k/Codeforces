#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    for(ll i = 1; pow(2, i-1) <= n; i++){
        ll s = pow(2, i-1), j = pow(2, i);
        //cout << i << " here " << j << endl;
        ll fn = n;
        if(fn >= s) fn-=s, cnt+=i;
        cnt += (fn/j)*i;
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
