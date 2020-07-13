#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n][n];
    for(ll i = 0; i < n; i++)  for(ll j = 0; j < n; j++) a[i][j] = 0;
    ll x = 0;
    for(ll i = 0; i < n; i++){
        if(x >= k) break;
        for(ll j = 0; j < n; j++) {
                 if(x >= k) break;
                 a[j][(i+j)%n] = 1, x++;
        }
    }
    ll xmin = 999999999999, xmax = 0, ymin = 99999999999, ymax = 0, cnt = 0;
    for(ll i = 0; i < n; i++){
        ll x = 0;
        for(ll j = 0; j < n; j++) a[i][j] ? ++x:0;
        xmin = min(x, xmin);
        xmax = max(x, xmax);
    }
    for(ll i = 0; i < n; i++){
        ll x = 0;
        for(ll j = 0; j < n; j++) a[j][i] ? ++x:0;
        ymin = min(x, ymin);
        ymax = max(x, ymax);
    }
    cnt = (xmin - xmax)*(xmin - xmax) + (ymin - ymax)*(ymin - ymax);
    
    cout << xmin << " " << xmax << " | " << ymin << " " << ymax << endl;
    cout << cnt << endl;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) cout << a[i][j];
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
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n][n];
    for(ll i = 0; i < n; i++)  for(ll j = 0; j < n; j++) a[i][j] = 0;
    ll x = 0;
    for(ll i = 0; i < n; i++){
        for(ll j = i; j < n; j++) {
            //cout << j << " " << j-i << " " << x <<  endl;
                 if(x >= k) break;
                 a[j][j-i] = 1, x++;
                 if(x >= k) break;
                 if( i != 0)a[j-i][j] = 1, x++;
        }
        if(x >= k) break;
    }
    ll xmin = 999999999999, xmax = 0, ymin = 99999999999, ymax = 0, cnt = 0;
    for(ll i = 0; i < n; i++){
        ll x = 0;
        for(ll j = 0; j < n; j++) a[i][j] ? ++x:0;
        xmin = min(x, xmin);
        xmax = max(x, xmax);
    }
    for(ll i = 0; i < n; i++){
        ll x = 0;
        for(ll j = 0; j < n; j++) a[j][i] ? ++x:0;
        ymin = min(x, ymin);
        ymax = max(x, ymax);
    }
    cnt = (xmin - xmax)*(xmin - xmax) + (ymin - ymax)*(ymin - ymax);
    cout << xmin << " " << xmax << " | " << ymin << " " << ymax << endl;
    cout << cnt << endl;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++) cout << a[i][j];
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
