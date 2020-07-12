#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n; string s;
    cin >> s;
    n = s.length();
    map<ll, ll> mp;
    for(ll i = 0; i < 26; i++) mp[i] = 999999999999;
    for(ll i = n-1; i >= 0; i--) mp[s[i] - 'a'] = i;
    //for(ll i = 0; i < 26; i++) cout << i << " " << mp[i] << endl;
    for(ll i = 0; i < n; i++) {
        ll flag = 0;
        for(ll j = 0; j < (s[i] - 'a'); j++) if(mp[j] < i){
            flag = 10;
            cout << "Ann" << endl; break;
        }
        if(!flag) cout << "Mike" << endl;
    }
    
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
