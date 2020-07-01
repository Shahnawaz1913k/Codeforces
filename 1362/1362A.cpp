#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x, y;
    cin >> x >> y;
    if(x < y) swap(x, y);
    if(x%y){
        cout << -1 << endl;
        return;
    }
    x/=y;
    ll cnt = 0;
    while(x%8 == 0) ++cnt, x/=8;
    while(x%4 == 0) ++cnt, x/=4;
    while(x%2 == 0) ++cnt, x/=2;
    //string s = bitset<64>(x).to_string();
    //ll cnt = __builtin_popcount(x);
    cout <<(x != 1 ? -1:cnt) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
