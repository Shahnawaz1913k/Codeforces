#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s;
    ll q, n;
    cin >> s >> q;
    n = s.size();
    s = '$' + s;
    ll a[n+1][30];
    for(ll i = 0; i < 30; i++) a[0][i] = 0;
    for(ll i = 1; i <= n; i++){
        for(ll j = 0; j < 30; ++j) a[i][j] = a[i-1][j];
        a[i][s[i] - 'a']++;
    }
    while(q--){
        ll l, r;
        cin >> l >> r;
        if(r == l || s[l] != s[r]) cout << "Yes" << endl;
        else {
            set<ll> st;
            for(ll j = 0; j < 30; ++j) if(a[r][j] - a[l-1][j]) st.insert(j);
            cout << (st.size() < 3 ? "No": "Yes") << endl;
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
