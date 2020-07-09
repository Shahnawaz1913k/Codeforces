#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[1010][2020][5];

void solve(){
    ll n, k;
    cin >> n >> k;
    dp[0][0][0] = dp[0][0][3] = 1; 
    dp[0][0][1] = dp[0][0][2] = 2; 
    for(ll i = 1; i <= n; i++)
        for(ll j = 0; j <= 2*(i-1); ++j){
        }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  pre();
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
