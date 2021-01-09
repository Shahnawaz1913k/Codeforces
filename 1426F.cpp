#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, mod = 1e9 + 7;
    string s;
    cin >> n >> s;
    ll a = 0, b = 0, c = 0, m = 1;
    for(ll i = 0; i < n; i++){
        c = (c + (s[i] == 'c' ? b:0))%mod;
        b = (b + (s[i] == 'b' ? a:0))%mod;
        a = (a + (s[i] == 'a' ? m:0))%mod;
        if(s[i] == '?'){
            c = (3*c + b)%mod;
            b = (3*b + a)%mod;
            a = (3*a + m)%mod;
            m*=3%mod;
        }
        //cout << i << " | " << a << " " << b << " " << c << endl;
    }
    cout << c << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //ll t;cin>>t;while(t--)
  solve();
  return 0;
}
