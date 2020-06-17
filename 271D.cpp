#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s, num;
    cin >> s >> num;
    ll k, n; cin >> k;
    n = s.length();
    set<string> st;
    for(ll i = 0; i < n; i++){
        string t;
        ll a[30] = {0};
        for(ll j = i; j < n; ++j){
            t += s[j];
            a[s[j] - 'a']++;
            ll cnt = 0;
            for(ll xx = 0; xx < 26; ++xx) if(num[xx] == '0') cnt += a[xx];
            //cout << i << " " << t << " " << cnt << endl;
            if(cnt <= k) st.insert(t);
            else break;
        }
    }
    //for(auto &i: st) cout << i << endl;
    cout << st.size() << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
