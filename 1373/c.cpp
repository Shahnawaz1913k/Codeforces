#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s;
    cin >> s;
    ll cnt = 0, mi = 0, n = s.length(), sum = 0, oc = 0;
    for(ll i = 0; i < n; i++){
        s[i] == '-' ? --sum:++sum;
        //cout << sum << endl;
        if(sum < mi) cnt += (i+1), mi = sum, oc++;
    }
    //cout << sum << " " << mi << " " << oc << endl;
    if(oc <= -mi) cnt+=n;
    cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
