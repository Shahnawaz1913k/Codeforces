#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string s;
    cin >> s;
    ll n = s.length(), cnt = 0;
    stack<char> st;
    for(ll i = 0; i < n; i++){
        if(st.empty()) st.push(s[i]);
        else {
            if(s[i] != st.top()) {++cnt; st.pop();}
            else st.push(s[i]);
        }
    }
    cout << (cnt%2 ? "DA":"NET") << endl;
}




int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
