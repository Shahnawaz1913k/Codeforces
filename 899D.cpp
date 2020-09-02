#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll len(ll x){
    ll cnt = 0;
    while(x) ++cnt, x/=10;
    return cnt;
}

ll check(ll x){
    while(x){
        if(x%10 != 9) return 0;
        x/=10;
    }
    return 1;
}

void solve(){
    ll n;
    cin >> n;
    ll ma = n + (n-1);
    if(ma < 9) cout << n*(n-1)/2;
    else if(check(ma)) cout << 1 << endl;
    else {
        ll cnt = 0;
        ll ncnt = len(ma) - 1;
        ll val = pow(10, ncnt) - 1;
        while(val <= ma){
            if(val <= n) cnt += (val/2);
            else cnt += (n-val/2);
            val += pow(10, ncnt);
        }
        cout << cnt << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
