#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
  string s;
  cin >> s;
  ll n = s.length(), cnt = 0;
  for(ll i = 0; i < n; ++i){
    ll x = 0, q = 0;
    stack<char> st;
    for(ll j = i; j < n; ++j){
        if(s[j] == '?') ++q;
        cout << i << " " << j << endl;
        if(s[j] != '?'){
        if(!st.size()) st.push(s[j]);
        else if(st.top() == '(' && s[j] == ')') st.pop();
        else st.push(s[j]);
        }
        if(q >= st.size() && (q-st.size())%2 == 0) ++cnt, cout << q << " here " << st.size() << endl;
        // cout << q << " - " << st.size() << endl;
    }
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
