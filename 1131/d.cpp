#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for(ll i = 0; i < n; i++) a[i] = 1;
    for(ll i = 0; i < m; i++) b[i] = 1;
    string s[n];
    for(ll i = 0; i < n; i++) cin >> s[i];
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++){
            if(s[i][j] == '>') a[i] = max(a[i], b[j] + 1);
            if(s[i][j] == '<') b[j] = max(a[i] + 1, b[j]);
            if(s[i][j] == '=') {
                ll x = max(a[i], b[j]);
                a[i] = x, b[j] = x;
        }
        }
    for(ll i = 0; i < m; i++)
        for(ll j = 0; j < n; j++){
            if(s[j][i] == '>') a[j] = max(a[j], b[i] + 1);
            if(s[j][i] == '<') b[i] = max(a[j] + 1, b[i]);
            if(s[j][i] == '=') {
                ll x = max(a[j], b[i]);
                a[j] = x, b[i] = x;
        }
        }
    for(ll i = 0; i < n; i++)
        for(ll j = 0; j < m; j++){
            if(s[i][j] == '>' && a[i] > b[j]) continue;
            else if(s[i][j] == '<' && a[i] < b[j]) continue;
            else if(s[i][j] == '=' && a[i] == b[j]) continue;
            else {
                cout << "No" << endl;
                return;
            }
    }
    cout << "Yes" << endl;
    for(ll i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
    for(ll i = 0; i < m; i++) cout << b[i] << " ";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
