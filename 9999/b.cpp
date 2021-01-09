#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], b[n];
    for(ll i = 0; i < n; ++i) cin >> a[i];
    //vector<ll> vn, vp;
    vector<ll> v;
    for(ll i = 0; i < n; ++i) {
        cin >> b[i];
        if(!b[i]) {
            /*
            if(a[i] > 0) vp.push_back(a[i]);
            if(a[i] < 0) vn.push_back(a[i]);
            */
            v.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll k = 0, indx = 0;
    for(ll i = indx; i < n; ++i) if(!b[i]) a[i] = v[k++];
    /*
    sort(vn.begin(), vn.end());
    sort(vp.begin(), vp.end(), greater<ll>());
    for(ll i = 0; i < n; ++i) if(!b[i]) {
        a[i] = vp[k++];
        if(k == vp.size()){
            indx = i+1;
            break;
        }
    }k = 0;
    for(ll i = indx; i < n; ++i) if(!b[i]) a[i] = vn[k++];
    */
    for(ll i = 0; i < n; ++i) cout << a[i] << " ";
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
