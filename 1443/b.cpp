#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll cnt = (s[0] == '1'), onecnt = 0, tcnt = 0, n = s.size();
    for(ll i = 1; i < n; i++){
        if(s[i] == '0'){
            if(cnt) onecnt++, tcnt += a;
            cnt = 0;
        } else ++cnt;
    }
    if(cnt) onecnt++, tcnt += a;
    if(a <= b){
        cout << tcnt << endl;
        return;
    }
    cnt = (s[0] == '0');
    vector<ll> v;
    for(ll i = 1; i < n; i++){
        if(s[i] == '1'){
            if(cnt) v.push_back(cnt);
            cnt = 0;
        } else ++cnt;
    }
    //for(auto &i: v)  cout << i << " af " << endl;
    cnt = 0;
    //cout << tcnt << " " << onecnt << endl;
    for(auto &i: v) {
        //cout << i << " af " << endl;
        if(cnt == 0 && s[0] == '1') tcnt += min(0ll, i*b - a);
        if(cnt) tcnt += min(0ll, i*b - a);
        ++cnt;
    }
    cout << tcnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
