#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], cnt = 0;
    for(ll i = 0; i < n; i++) cin >> a[i];
    string s;
    ll l = 0, r = n-1, cur = -1;
    while(l < r){
        // if(a[l] <= cur && a[r] <= cur) break;
        if(a[l] > cur && a[l] < a[r]) s+='L', ++cnt, cur = a[l], ++l;
        else if(a[r] > cur && a[r] < a[l]) s+='R', ++cnt, cur = a[r], --r;
        else break;
    }
    if(l == r){
        if(a[l] > cur) cout << cnt+1 << endl << s+'L' << endl;
        else cout << cnt << endl << s << endl;
        return;
    }
    ll m1 = 0, m2 = 0;
    string s1, s2;
    ll x = cur;
    for(ll i = l; i < r; ++i) {
        if(x < a[i]) s1+='L', ++m1, x = a[i];
        else break;
    } x= cur;
    for(ll i = r; i > l; --i){
        if(x < a[i]) s2+='R', ++m2, x = a[i];
        else break;
    }
    //cout << l << " " << r << " " << cur << " | " << m1 << " " << m2 << endl;
    cout << cnt + max(m1, m2) << endl << s + (m1 >= m2 ? s1:s2) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}