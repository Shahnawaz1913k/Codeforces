#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, l;
    cin >> n >> k >> l;
    ll a[n];
    vector<ll> v;
    v.push_back(0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] + k <= l) v.push_back(i);
    }
    v.push_back(n+1);
    for(ll i = 1; i < v.size(); i++){
        //cout << v[i-1] << " " << v[i] << endl;
        ll t = k, d = 1;
        for(ll j = v[i-1]+1; j < v[i]; j++){
            t += (d ? -1:1);
            if(d && a[j] + t > l) t = l-a[j];
            if(a[j]+t > l || t < 0){
                cout << "no" << endl;
                return;
            }
            if(t == 0) d = 0;
        }
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
