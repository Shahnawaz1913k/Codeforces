#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    cout << 3*n + 4 << endl;
    for(ll i = 0; i <= n; i++){
        cout << i << " " << i << endl;
        cout << i << " " << i+1 << endl;
        cout << i+1 << " " << i << endl;
    }
        cout << n+1 << " " << n+1 << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
