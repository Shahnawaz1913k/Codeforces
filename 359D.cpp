#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    if(n == 0) cout << 0 << " " << 1 << endl;
    else if(m == 0) cout << 1 << " " << 0 << endl;
    else {
        if(m > n) cout << 0 << " " << m << endl << n << " " << 0 << endl;
        else cout << n << " " << 0 << endl << 0 << " " << m << endl;
    }
    cout << n << " " << m << endl;
    cout << 0 << " " << 0 << endl;
    if(n == 0) cout << 0 << " " << m-1 << endl;
    else if(m == 0) cout << n-1 << " " << 0 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
