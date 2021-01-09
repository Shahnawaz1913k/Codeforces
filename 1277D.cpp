#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, cnt = 0;
    cin >> n;
    map<string, ll> mp;
    string s, st[n];
    for(ll i = 0; i < n; i++)  cin >> st[i], mp[st[i]]++;
    ll z = 0, one = 0, oz = 0, zo = 0;
    for(ll i = 0; i < n; i++) {
        ll len = st[i].size();
        if(st[i][0] == st[i][len-1]){
            mp[st[i]]++;
            st[i][0] == '0' ? z++:one++;
        }
        s = st[i];
        reverse(s.begin(), s.end());
        if(mp[s] && mp[st[i]]) mp[s]++, mp[st[i]]++;
        else {
            if(st[i][0] == '0' && st[i][len-1] == '1') zo++;
            if(st[i][0] == '1' && st[i][len-1] == '0') oz++;
        }
    }
    if(z + one == n && z && one){
        cout << -1 << endl; return;
    }
    cnt = (zo - oz)/2;
    cout << abs(cnt) << endl;
    for(ll i = 0, j = 0; i < n && j < abs(cnt); i++) if(mp[st[i]] == 1){
        ll len = st[i].size();
        if(cnt > 0 && st[i][0] == '0' && st[i][len-1] == '1') ++j, cout << i+1 << " ";
        if(cnt < 0 && st[i][0] == '1' && st[i][len-1] == '0') ++j, cout << i+1 << " ";
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
