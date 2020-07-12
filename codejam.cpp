#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll t){
    ll n, q;
    cin >> n >> q;
    ll a[n], cnt = 0;
    for(ll i = 1; i < n; i++) cin >> a[i];
    cout << "Case #"<<t<<": ";
    while(q--){
        ll s, k;
        cin >> s >> k;
        ll l = s-1, r = s;
        ll pic = s;
        if(s == 1) pic = k;
        if(s == n) pic = n - k + 1;
        if(s == 1 || s == n){
            cout << pic << " ";
            continue;
        }
        for(ll i = 1; i < k; i++){
            if(l < 1) r++, pic = r;
            else if(r >= n) l--, pic = l+1;
            else {
                if(a[l] < a[r]) pic = l, l--;
                else ++r, pic = r;
            }
        }
            cout << pic << " ";
    }
    cout << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;
  for(ll i = 1; i <= t; i++) solve(i);
  return 0;
}
