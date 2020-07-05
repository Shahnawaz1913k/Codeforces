#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 1;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        a[i] = abs(a[i]);
        a[i] = (i%2 == 0 ? a[i]:-a[i]);
    }
    for(ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
