#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    if(k > n*n){
        cout << -1 << endl;
        return;
    }
    ll a[n][n];
    for(ll i = 0; i < n; i++) 
        for(ll j = 0; j < n; j++) a[i][j] = 0;
    ll flag = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = i; j < n; j++) {
            //cout << i << " " << j << " " << k << endl;
            if(!k) {flag = 10; break;}
            if(i == j) k--, a[i][j] = 1;
            else{
                if(k == 1){flag = 10; a[i+1][i+1] = 1; k--; break;}
                else {
                    a[i][j] = 1, a[j][i] = 1;
                    k-=2;
                    if(!k) { flag = 10; break; }
                }
            }
        }
        if(flag == 10) break;
    }
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) cout << a[i][j] << " ";
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
