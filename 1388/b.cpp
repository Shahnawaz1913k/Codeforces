#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll trail = n/4;
    string s, t;
    if(n%4) {
        s = '8';
        --n;
        //if(4 - n%4 == 1) t = '8';
    }
        n-=trail;
    for(ll i = 0; i < n; i++) s = '9' + s;
    for(ll i = 0; i < trail; i++) s += '8';
    cout << s << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
