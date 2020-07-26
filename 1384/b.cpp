#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, l;
    cin >> n >> k >> l;
    ll a[n], t[2*k];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i <= k; i++) t[i] = i;
    for(ll i = 1; i <= k ;i++) t[2*k-i] = i;

    ll pos = k;
    for(ll i = 0; i < n; i++) {
        //cout << i << " " << pos << " " << a[i] << " " << t[pos%(2*k)] << endl;
        if(a[i] > l){
            cout << "no" << endl;
            return;
        }
        if(a[i] + k <= l) pos = k;
        else {
            if(pos%(2*k) >= k) { 
                //cout << "here " << pos << endl;
                if(t[pos%(2*k)] + a[i] <= l) pos++;
                else while(t[pos%(2*k)] + a[i] > l) pos++;
            } else if(t[pos%(2*k)+1] + a[i] > l){
               cout << "no"  << endl;
               return;
            } else pos++;
        }
    }
    cout << "yes" << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
