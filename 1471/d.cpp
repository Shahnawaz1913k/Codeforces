#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    int val;
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> val;
        for(int i = 2; i*i <= val; i++) {
            while(val%(i*i) == 0) val/=(i*i);
        }
        mp[val]++;
    }
    int cntx = 0, cnt = 0;
    for(auto &i: mp) {
        cnt = max(cnt, i.second);
        if(i.second%2 == 0 || i.first == 1) cntx += i.second;
    }
    int q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        if(x == 0) cout << cnt << endl;
        else  cout << max(cnt, cntx) << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
