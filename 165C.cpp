#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve(){
    ll k, n;
    cin >> k;
    string s;
    cin >> s;
    n = s.length();
    ll cnt = 0, x = 0;
    vector<ll> v;
    for(ll i = 0; i < n; i++) {
        if(s[i] == '1') v.push_back(i), cnt += x*(x+1)/2, x = 0;
        else ++x;
    } cnt += x*(x+1)/2;
    if(!k){
        cout << cnt << endl;
        return;
    } 
    cnt = 0;
    for(ll i = 0; i + k - 1 < v.size() ; i++){
        ll l = i, r = i + k - 1;
        ll dl = v[i] - (i == 0 ? -1 : v[i-1]), dr = (r == v.size()-1 ? n : v[r+1]) - v[r];
        //cout << i << " " << dl << " " << dr << endl;
        cnt += dl*dr;
    }
    cout << cnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
