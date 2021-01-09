#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> adj[100010];

set<int> check(int x, int n){
    set<int> s;
    for(int i = 1; i <= n; i++) s.insert(i);
    for(auto &i: adj[x]) s.erase(i);
    return s;
}

void solve(){
    int n, m;
    cin >> n >> m;
    map<ll, ll> mp;
    for(ll i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        mp[x*1000000 + y]++;
        mp[y*1000000 + x]++;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    set<int> s1 = check(1, n);
    set<int> s;
    for(int i = 1; i <= n; i++) s.insert(i);
    for(auto &i: s1) s.erase(i);
    set<int> s2 = check(*s.begin(), n);
    for(auto &i: s2) if(s.find(i) != s.end()) s.erase(i);
    int ss1 = s1.size(), ss2 = s2.size(), ss3 = s.size();
    ll x = ss1*ss2 + ss2*ss3 + ss3*ss1;
    //cout << x << " here " << endl;
    if(m != ss1*ss2 + ss2*ss3 + ss3*ss1){
        cout << -1 << endl; return;
    }
    ll cnt = 0;
    for(auto &i: s){
        for(auto &j: s1) if(mp[i*1000000 + j]) ++cnt;
        for(auto &j: s2) if(mp[i*1000000 + j]) ++cnt;
    }
    ll cnt2 = 0;
    for(auto &i: s1){
        for(auto &j: s2) if(mp[i*1000000 + j]) ++cnt2;
    }
    if(cnt == ss3*(ss1+ss2) && cnt2 == ss1*ss2 && ss1 && ss2 && ss3) {
        map<int, int> mp2;
        for(auto &i: s1) mp2[i] = 1;
        for(auto &i: s2) mp2[i] = 2;
        for(auto &i: s) mp2[i] = 3;
        for(auto &i: mp2) cout << i.second << " ";
    } else cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
