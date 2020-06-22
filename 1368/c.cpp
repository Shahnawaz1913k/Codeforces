#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k = 26;
    cin >> n;
    string s;
    while(n){
        ll x = (n%26 == 0 ? 25: n%26-1);
        s += (char)(x + 'a');
        n= n - (n%26 == 0 ? 26:n%26);
        n/=26;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
