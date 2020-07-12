#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    string s;
    cin >> n >> s;
    map<char, ll> mp;
    for(ll i = 0; i < n; i++) mp[s[i]]++;
    vector<ll> v;
    while(1){
        if(mp['o'] && mp['n'] && mp['e']){
            mp['o']--, mp['n']--, mp['e']--;
            v.push_back(1);
        } else  break;
    }
    while(1){
        if(mp['z'] && mp['e'] && mp['r'] && mp['o']){
            mp['z']--, mp['e']--, mp['r']--, mp['o']--;
            v.push_back(0);
        } else  break;
    }
    for(auto &i: v) cout << i << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
