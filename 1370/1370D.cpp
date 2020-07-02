#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n, k, a[200200];

ll check(ll x){
    ll cnt1 = 0, cnt2 = 0;
    for(ll i = 0; i < n; i++){
        if(cnt1%2 == 0 && a[i] <= x) ++cnt1;
        else if(cnt1%2) ++cnt1;
        if(cnt2%2 == 1 && a[i] <= x) ++cnt2;
        else if(cnt2%2 == 0) ++cnt2;
    }
    return (max(cnt1, cnt2) >= k ? 10:0);
}

void solve(){
    cin >> n >> k;
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll l = 1, h = 1e9;
    ll mid = (l+h)/2;
    ll val = mid;
    while(l <= h){
        mid = (l + h)/2;
        if(check(mid)) val = mid, h = mid-1;
        else l = mid+1;
    }
    cout << val << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
