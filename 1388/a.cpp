#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    if(n <= 30) cout << "no" << endl;
    else {
        cout << "yes" << endl;
        if(n == 36 || n == 40 || n == 44) cout << 6 << " " << 10 << " " << 15 << " " << n - 31 << endl;
        else cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
