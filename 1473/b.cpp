#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll div(string s1, string s2){
    ll n = s1.size(), m = s2.size();
    ll cnt = 0;
    for(ll i = 0; i <= n-m; i+=m){
        for(ll j = 0; j < m; j++) if(s2[j] == s1[i+j]) ++cnt;
    }
    return (cnt == n);
}

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    ll n = s1.size(), m = s2.size();
    if(n < m) swap(n, m), swap(s1, s2);
    string x;
    for(ll i = 0; i < m; i++){
        x += s2[i];
        if(div(s1, x) && div(s2, x)){
            ll a = n/(i+1), b = m/(i+1);
            ll lcm = a*b/__gcd(a, b);
            for(ll j = 0; j < lcm; j++) cout << x;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
