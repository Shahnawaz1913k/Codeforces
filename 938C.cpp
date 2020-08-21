#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll x;
    cin >> x;
    ll n = sqrt(x)+1, m = 1;
    while(1){
        while(n*n - (n/m)*(n/m) < x) ++m;
        if(n*n - (n/m)*(n/m) == x) { cout << n << " " << m << endl; return; }
        if(n*n - (n/2)*(n/2) > x) break;
        ++n, m = 1; 
    }
    cout << -1 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll t;cin>>t;while(t--)
  solve();
  return 0;
}
/*
17
999954147
999917633
999844608
999808096
999735075
999698565
999625548
999589040
999516027
999479521
999406512
999370008
999297003
999260501
999187500
999151000
999078003

*/