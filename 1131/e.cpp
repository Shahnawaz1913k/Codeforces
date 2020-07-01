#include<bits/stdc++.h>
using namespace std;
// typedef long long int int;

void solve(){
    int n, m;
    cin >> m >> n;
    string s[m], st[m];
    int a[m][n], h = 0;
    for(int i = 0; i < m; i++) cin >> s[i], st[i] = s[i];
    queue<pair<int, int> > q;
    for(int i = 0; i < m; i++) 
        for(int j = 0; j < n; j++){
            if(s[i][j] == '1' || s[i][j] == '2') ++h;
            if(s[i][j] == '0') {
                a[i][j] = 0;
                q.push({i, j});
            }
            else a[i][j] =9999999 ;
        }
    if(!h){
        cout << 0 << endl;
        return;
    }
    int vis[m][n];
    memset(vis, 0, sizeof(vis));
    while(!q.empty()){
            pair<int, int> xx = q.front();
            q.pop();
            int x = xx.first, y = xx.second; 
            vis[x][y]++;
            if(vis[x][y] < (s[x][y] - '0')) {
                q.push(xx);
                continue;
            }
            if(x < m-1) if(!vis[x+1][y] && s[x+1][y] != '_' && s[x+1][y] != '0') {
                a[x+1][y] = min(a[x+1][y], a[x][y] + (st[x+1][y] - '0')), q.push(make_pair(x+1, y));
            }
            if(y < n-1) if(!vis[x][y+1] && s[x][y+1] != '_'&& s[x][y+1] != '0') {
                a[x][y+1] = min(a[x][y+1], a[x][y] + (st[x][y+1] - '0')), q.push(make_pair(x, y+1));
            }
            if(x > 0) if(!vis[x-1][y] && s[x-1][y] != '_'&& s[x-1][y] != '0') {
                a[x-1][y] = min(a[x-1][y], a[x][y] + (st[x-1][y] - '0')), q.push(make_pair(x-1, y));
            }
            if(y > 0) if(!vis[x][y-1] && s[x][y-1] != '_'&& s[x][y-1] != '0') {
                a[x][y-1] = min(a[x][y-1], a[x][y] + (st[x][y-1] - '0')), q.push(make_pair(x, y-1));
            }
    }
    int cnt = 0;
    for(int i = 0; i < m; i++) for(int j = 0; j < n; j++) if(s[i][j] == '1' || s[i][j] == '2'){
        //cout << i << " " << j << a[i][j] << endl;
        if(a[i][j] >= 9999999){
            cout << -1 << endl;
            return;
        }
        cnt = max(cnt, a[i][j]);
    }
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
