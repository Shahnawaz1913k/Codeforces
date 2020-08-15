#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int vis[210][210];

void solve(){
  int n, m;
  cin >> n >> m;
  string s[n];
  for(int i = 0; i < n; ++i) cin >> s[i];
  vector<pair<int, pair<int, int> > >  v;
  for(int i = 0; i < n; ++i)
      for(int j = 0; j < m; ++j){
        int cnt = 1;
        while(1){
          cout << cnt << endl;
          if(i-cnt < 0 || i + cnt >= n || j-cnt < 0 || j + cnt >= m) break;
          // cout << i-cnt << " " << i+cnt << " " << j-cnt << " " << j+cnt << endl;
          if(s[i-cnt][j] == '*' && s[i+cnt][j] == '*' && s[i][j-cnt] == '*' && s[i][j+cnt] == '*') {
            ++cnt;
            cout << "ok" << endl;
            vis[i-cnt][j] = 1, vis[i+cnt][j] = 1, vis[i][j-cnt] = 1, vis[i][j+cnt] = 1;
            cout << "ok" << endl;
          } else break;
        }
        cout << i << " " << j << " " << cnt << endl;
        if(cnt == 1) continue;
        else v.push_back({i+1, {j+1, cnt-1}});
      }
      cout << "here" << endl;
      for(int i = 0; i < n; ++i) for(int j = 0;  j < m; ++j) if(vis[i][j] == 0 && s[i][j] =='*'){
        cout << -1 << endl;
        return;
      }
      cout << v.size() << endl;
      for(auto &i: v) cout << i.first << " " << i.second.first << " " << i.second.second << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}