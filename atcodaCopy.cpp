#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int x){
    ll n;
    string s;
    cin >> n >> s;
    stack<char> st;
    for(ll i = 0; i < n; i++){
        if(st.empty()) st.push(s[i]);
        else if(st.top() != s[i]) st.pop();
        else st.push(s[i]);
    }
    cout << "Case #"<<x+1<<": " << (st.size() > 1 ? 'N': 'Y') << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;
  //while(t--)
  for(int i = 0; i < t; i++)
  solve(i);
  return 0;
}
