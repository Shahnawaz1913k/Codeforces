#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll f[20], c[20], c0[20], n;
map<string, ll> mp;

ll fun(string s){
    ll ns = s.size();
    for(ll i = 0; i < 10; i++) c[i] = 0;
    for(ll i = 0; i < ns; ++i) c[s[i] - '0']++;
    // for(ll i = 0; i < 10; i++) cout << c0[i] << " - " << c[i] << endl;
    for(ll i = 0; i < 10; i++) if(c0[i] && !c[i]) return 0;
    sort(s.begin(), s.end());
    if(mp[s]) return 0;
    mp[s]++;
    // cout << s << endl;
    ll cnt = f[ns], sv = 0;
    for(ll i = 0; i < 10; ++i) cnt/=f[c[i]];
    if(c[0] > 0){
        c[0]--;
        sv = f[ns-1];
        for(ll i = 0; i < 10; ++i) sv/=f[c[i]];
        // cout << cnt << " " << sv << endl;
        cnt-=sv;
    }
    return cnt;
}

void solve(){
    string s;
    cin >> s;
    n = s.size();
    f[0] = 1;
    for(ll i = 1; i <= 20; ++i) f[i] = f[i-1]*i;
    for(ll i = 0; i < n; ++i) c0[s[i] - '0']++;
    ll cnt = 0;
    for(ll i = 1; i <= (1<<n); ++i){
        string x;
        for(ll j = 0; j < n; ++j) if(i&(1<<j)) x+=s[j];
        cnt += fun(x);
    }
    cout << cnt << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
 //  int t;cin>>t;for(int i = 0 ;i<t;i++)
  solve();
  return 0;
}