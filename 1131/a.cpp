#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll w1, h1, w2, h2, cnt = 0;
    cin >> w1 >> h1 >> w2 >> h2;
    cnt = 2*(h1 + h2) + 2*max(w1, w2) + 4;
    cout<< cnt <<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
