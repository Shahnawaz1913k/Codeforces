#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    if(min(n, m) < 2) {
        cout << 0 << endl;
        return;
    }
    if(min(n, m) > 3){
        cout << -1 << endl;
        return;
    }
    string s[max(n, m)];
    if(m > 3) for(ll i = 0; i < n; ++i) cin >> s[i];
    else {
        for(ll i = 0; i < n; ++i) {
            char c;
            for(ll j = 0; j < m; ++j) cin >> c, s[j]+=c;
        }
    }
    // for(ll i = 0; i < min(n, m); i++) cout << s[i] << endl;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(ll i = 0; i < max(n, m); ++i){
        if(i%2 == 0){
            if(s[0][i] == s[1][i]) ++cnt2;
            else ++cnt1;
            if(min(n, m) == 3){
                if(s[2][i] == s[1][i]) ++cnt4;
                else ++cnt3;
            }
        } else {
            if(s[0][i] == s[1][i]) ++cnt1;
            else ++cnt2;
            if(min(n, m) == 3){
                if(s[2][i] == s[1][i]) ++cnt3;
                else ++cnt4;
            }
        }
    }
    // cout <<cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << endl;
    cout << min(cnt1, cnt2) + min(cnt3, cnt4) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
/*


5 3
100
100
100
100
100


*/