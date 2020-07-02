#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    if(n == 1){
        cout << "FastestFinger" << endl;
        return;
    }
    if(n == 2 || n%2){
        cout << "Ashishgup" << endl;
        return;
    }
    ll cnt = 0, k = 0;
    while(n%2 == 0)n/=2, ++cnt;

    for(ll i = sqrt(n); i > 1; i--) if(n%i == 0) k =i;

    if((cnt > 1 && n > 1) || (cnt == 1 && k))  cout << "Ashishgup" << endl;
    else cout << "FastestFinger" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
