#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n-1; i++) {
        if(a[i] < a[i+1]) b[i] = 1;
        else if(a[i] == a[i+1]) b[i] = 0;
        else b[i] = -1;
    }
    
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
