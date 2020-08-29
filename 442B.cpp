#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    double a[n],neg[n], val[n], ma = 0;
    for(ll i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    neg[0] = 1-a[0];
    val[0] = a[0];
    for(ll j = 0; j < n; ++j){
        neg[j] = 1-a[j], val[j] = a[j];
        ma = max(ma, a[j]);
        for(ll i = j+1; i < n; ++i){
            neg[i] = neg[i-1]*(1-a[i]);
            val[i] = val[i-1]*(1-a[i]) + a[i]*neg[i-1];
            ma = max(ma, val[i]);
        }
    }
    cout <<setprecision(10) << fixed << ma << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
