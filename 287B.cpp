#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n, k;

ll check(ll x){
    ll cnt = k*(k+1)/2 - x*(x+1)/2;
    if(cnt >= n) return 10;
    else return 0;
}

void solve(){
    cin >> n >> k; --n; --k;
    if(n > k*(k+1)/2){
        cout << -1 << endl;
        return;
    }
    ll l = 1, h = k, mid;
    while(l < h){
        mid = (l + h)/2;
        if(check(mid)) l = mid + 1;
        else h = mid - 1;
    }
    //if(check(l)) --l;
    for(ll i = max(0ll, l-50); i < min(l + 50, k+1); i++){
        ll cnt = k*(k+1)/2 - i*(i+1)/2;
        if(cnt == n){
            cout << k-i << endl;
            return;
        } else if(cnt < n) {
            cout << k-i+1 << endl;
            return;
        } else continue;
    }
    //cout << k-l+1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
