#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll msf = 0, meh = 0, ma = 0, cnt = 0;
    for (int i=0; i< n; i++) 
    { 
        meh += a[i]; 
        if (msf < meh) 
        { 
            msf = meh; 
            ma = max(ma, a[i]);
            cnt = max(cnt, msf - ma);
        } 
  
        if (meh < 0) 
        { 
            meh = 0; 
            ma = a[i];
        } 
    } 
    cout << max(0ll, cnt) << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
