#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a[n], b[k];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < k; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+k);
    ll cnt = 0;
    for(ll i = 0; i < k; i++){
        cnt += a[n-i-1];
        b[i]--;
        if(b[i] == 0) cnt += a[n-i-1];
    }
    sort(b, b+k, greater<ll>());
    //cout << "here " << cnt << endl;
    ll pos = 0, indx = 0;
    while(indx < n){
        if(!b[pos] || pos >= k) break;
        //cout << "add " << a[indx] << " " << pos << endl;
        cnt += a[indx];
        indx += b[pos];
        pos++;
    }
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
