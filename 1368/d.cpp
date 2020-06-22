#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f(string x){
    ll cnt = 0;
    for(ll i = 0; i < 30; i++) {
        cnt*=2;
        if(x[i] == '1') ++cnt;
    }
    return cnt*cnt;
}

void solve(){
    ll n, cnt = 0;
    cin >> n;
    ll a[n]; string s[n];
    for(ll i = 0; i < n; i++) cin >> a[i], s[i] = bitset<30>(a[i]).to_string();
    for(ll i = 0; i < 30; i++) {
       char b[n];
       for(ll j = 0; j < n; j++) b[j] = s[j][i];
       sort(b, b+n);
       for(ll j = 0; j < n; j++) s[j][i] = b[j];
    }
    for(ll i = 0; i < n; i++) cnt += f(s[i]);
        cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
