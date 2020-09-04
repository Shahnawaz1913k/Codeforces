#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 998244353 ;
void solve(){
  ll n ;
  cin >> n ;
  ll a[n];
  for(ll i = 0 ; i < n ; i++)cin >> a[i];
  sort(a,a+n);
  ll cnt = 0,ans = 1e18;
  ll val = pow(2, log2(a[n-1])*1.0/(n-1));
  // while (log2(a[n-1])*1.0/n-1 == log2(val))val++;
  for(ll i = max(1ll, val-2); i <= val+1; i++)
  {
    cnt = 0;
    for(ll j = 0 ; j < n ; j++)
    {
      cnt+=abs(pow(i,j) - a[j]);
      
    }
    // cout << i << " " << cnt << endl;
    ans = min(ans,cnt);
  }
  // cout << val << endl;
  cout << ans ;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
   
  return 0;
}