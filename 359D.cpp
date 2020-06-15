#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll check(string st, string s, ll m, ll n){
    ll cnt = 0;
    for(ll i = 0; i < n; i+=m){
        string t = s.substr(i, m);
        if(t == st) ++cnt;
    }
    //cout << st << " " << cnt << " " << m << " "  << n << endl;
    return (cnt*m == n ? 10:0);
}

void solve(){
    string s, t;
    cin >> s >> t;
    ll ls = s.length(), lt = t.length();
    set<string> vs, vt;
    for(ll i = 1; i <= sqrt(ls); i++) if(ls%i == 0){
        string st1 = s.substr(0, i), st2 = s.substr(0, ls/i);
        if(check(st1, s, i, ls)) vs.insert(st1);
        if(check(st2, s, ls/i, ls)) vs.insert(st2);
    }
    for(ll i = 1; i <= sqrt(lt); i++) if(lt%i == 0){
        string st1 = t.substr(0, i), st2 = t.substr(0, lt/i);
        if(check(st1, t, i, lt)) vt.insert(st1);
        if(check(st2, t, lt/i, lt)) vt.insert(st2);
    }
    ll cnt = 0;
    for(auto &i: vs) {
        //cout << i << endl;
        if(vt.find(i) != vt.end()) ++cnt;
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
