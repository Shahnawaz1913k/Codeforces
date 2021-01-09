#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll cnt1 = 0, cnt2 = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] > b[i]) cnt1++;
        if(a[i] < b[i]) cnt2++;
    }
    if(cnt1 > cnt2) cout << "RED" << endl;
    else if(cnt1 < cnt2) cout << "BLUE" << endl;
    else cout << "EQUAL" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
