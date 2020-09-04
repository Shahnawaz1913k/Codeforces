#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, a, b;
    cin >> n >> a >> b;
    if(min(a, b) > 2 || ((n == 2 || n == 3) && a == 1 && b == 1)){
        cout << "NO" << endl; return;
    }
    string st[n], s(n, '0');
    for(ll i = 0; i < n; i++) st[i] = s;
        for(ll i = max(a, b) - 1; i< n-1; ++i) st[i][(i+1)] = '1', st[(i+1)][i] = '1';
        if(b != 1){
            for(ll i = 0; i < n; ++i)
                for(ll j = 0; j < n; ++j) if(i!=j) st[i][j] = (st[i][j] == '0' ?'1':'0');
        }
    cout << "YES" << endl;
    for(ll i = 0; i < n; i++) cout << st[i] << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}