#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k;
    cin >> n >> k;
    string s;
    for(ll i = 0; i < n; i++){
        if(i%3 == 0) s+='a';
        if(i%3 == 1) s+='b';
        if(i%3 == 2) s+='c';
    }
    cout << s << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
