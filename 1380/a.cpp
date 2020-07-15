#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    cin >> n;
    ll a[n], indx;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i < n; i++) {
        ll flag = 0, x = a[i];
        for(ll j = i+1; j < n; j++) {
            if(flag == 0){
                if(a[i] < a[j]) flag = 1, x = a[j], indx = j;
            } else if(flag == 1){
                if(x > a[j]) {
                    cout << "yes" << endl;
                    cout << i+1 << " " << indx+1 << " " << j+1 << endl;
                    return;
                }
            }
        }
    }
    cout << "no" << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
