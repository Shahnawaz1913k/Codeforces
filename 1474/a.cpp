#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n;
    string b, a;
    cin >> n >> b;
    a += '1';
    for(ll i = 1; i < n; i++){
        if(b[i] == '1'){
            if(a[a.size() - 1] == '1' && b[i-1] == '1') a+='0';
            else a+='1';
        } else {
            if((a[a.size() - 1] == '1' && b[i-1] == '0') || (a[a.size() - 1] == '0' && b[i-1] == '1')) a+='0';
            else a+='1';
        }
    }
    cout << a << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
