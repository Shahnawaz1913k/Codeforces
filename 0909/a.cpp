#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    string a, b;
    cin >> a >> b;
    string c;
    c += a[0];
    for(ll i = 1; i < a.length(); ++i){
      if(a[i] < b[0]) c+= a[i];
      else break;
    }
    c+=b[0];
    // for(ll i = 1; i < b.length(); ++i){
    //   if(b[i] == 'a') c+=b[i];
    //   else break;
    // }
    cout << c << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
