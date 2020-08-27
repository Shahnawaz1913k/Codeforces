#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll cnt = 1, x = 0;
    if(n == 3){
        cout << 5 << endl; return;
    }
    for(ll i = 1; i < 200; i+=2){
        if(n <= cnt){
            cout << i << endl; return;
        }
        cnt +=  4*pow(2, x);
        ++x;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
