#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, x;
    cin >> n;
    ll cnt1 = 0, cnt2 = 0, sl = 1000, o = 0, y, speed, pi = 0;
    stack<ll> st;
    st.push(1000);
    while(n--){
        cin >> x;
        if(x == 2) cnt1 += o, o = 0;
        if(x == 4) o = 0;
        if(x == 6) ++o;
        if(x == 1) {
            cin >> speed;
            while(st.top() < speed) st.pop(), ++cnt2;
        }
        if(x == 5) st.push(1000);
        if(x == 3) {
            cin >> y;
            if(y < speed) { ++cnt2; continue; }
            st.push(y);
        }
        // cout << cnt1 << " " << cnt2 << endl;
    }
        cout << cnt1 + cnt2 << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}