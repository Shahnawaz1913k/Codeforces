#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll vis[60][60];
ll n, m;
string s[60];

void dfs(ll x, ll y){
    if(x > n || x < 1 || y > m || y < 1 || s[x][y] == '#' || s[x][y] == 'B' || vis[x][y]) return;
    vis[x][y] = 10;
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

void solve(){
    cin >> n >> m;
    string st;
    for(ll i = 0; i < m+2; i++) st += '#';
    for(ll i = 1; i <= n; i++) cin >> s[i], s[i] = '#' + s[i] + '#';
    s[0] = st, s[n+1] = st;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; ++j) {
            vis[i][j] = 0;
            if(s[i][j] == 'B') {
                if(s[i-1][j] == '.') s[i-1][j] = '#';
                if(s[i+1][j] == '.') s[i+1][j] = '#';
                if(s[i][j-1] == '.') s[i][j-1] = '#';
                if(s[i][j+1] == '.') s[i][j+1] = '#';
                if(s[i-1][j] == 'G' || s[i+1][j] =='G' || s[i][j-1] == 'G' || s[i][j+1] == 'G'){
                    cout << "no" << endl; return;
                }
            }
        }
    dfs(n, m);
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; ++j) if(s[i][j] == 'G'  && !vis[i][j]) {
                cout << "no" << endl;
                return;
        }
    cout << "yes" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
