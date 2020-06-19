#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, a, b, x, y;
    cin >> n >> a >> b;
    if(a*b >= 6*n){
        cout << a*b << endl << a << " " << b;
        return;
    }
    ll oa = a, ob = b;
    if(a > b) swap(a, b);
    ll ar = 999999999999;
    cerr << ceil(sqrt(6*n)) << endl;
    for(ll i = a; i <= ceil(sqrt(6*n)); i++) {
        ll yy = ceil(n*6.0/i);
        if(b > yy) continue;
       if(i*yy < ar) ar = i*yy, x = i, y = yy;
    }
    if(x < oa || y < ob) swap(x, y);
    cout << ar << endl << x << " " << y << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
