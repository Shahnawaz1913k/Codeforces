#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, l;
    cin >> n >> l;
    string s, st[2*n - 1];
    for(ll i = 0; i < 2*n - 1; i++)
        for(ll j = 0; j < 2*n - 1; j++) st[i] += '*';
    cin >> s;
    ll cnt = 0;
    for(ll i = n-1; i >= 0; i--){
        if(i == 0) st[n-1][n-1] = s[cnt];
        else {
            for(ll j = 0; j < i; j++) { st[n-1-j][j+(n-1-i)] = s[cnt]; 
                cnt = (cnt+1)%l;
            }
            for(ll j = 0; j < i; j++) {
                st[j+(n-1-i)][n-1+j] = s[cnt], cnt = (cnt+1)%l;
            }
            for(ll j = 0; j < i; j++) {
                st[n-1+j][2*(n-1)-j-(n-1-i)] = s[cnt], cnt = (cnt+1)%l;
            }
            for(ll j = 0; j < i; j++) {
                st[2*(n-1)-j-(n-1-i)][n-1-j] = s[cnt], cnt = (cnt+1)%l;
            }
        }
    }
    for(ll i = 0; i < 2*n - 1; i++) {
        for(ll j = 0; j < 2*n - 1; j++) cout << (st[i][j] == '*' ? ' ':st[i][j]);
        cout << endl;
    }
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
