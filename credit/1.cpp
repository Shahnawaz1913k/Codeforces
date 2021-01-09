#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll pre[n] = {0}, suff[n] = {0};
    ll mi = a[0];
    for(ll i = 0; i < n; i++) mi = min(mi, a[i]), pre[i] = mi;
    ll ma = a[n-1];
    for(ll i = n-1; i >= 0; i--) ma = max(ma, a[i]), suff[i] = ma;
    ma = 0;
    for(ll i = 1; i < n; i++) ma = max(ma, suff[i] - pre[i-1]);
    cout << ma << endl;
}

int main(){
    solve();
    return 0;
}
