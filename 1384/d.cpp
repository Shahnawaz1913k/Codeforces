#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n;
string s, t;

ll check(ll x){
    ll lcnt = 0;
    ll cnt = 0, os = 0;
    for(ll i = 0; i < s.length(); i++){
        ++cnt;
        cout << i << s[i]<< " " << cnt << " " << os << endl;
        if(s[i] == '-' || s[i] == ' ') {
            if(cnt <= x) os = cnt;
            else {
                lcnt++;
                cnt -=os;
                os = cnt;
                if(cnt > x) {
                    cout << "ins " << i << " " << cnt << endl;
                    return 0;
                }
            }
        }
    }
    cout << cnt - os << "  ehaha " << lcnt << endl;
    return (cnt - os > x || lcnt > n ? 0:1);
}

void solve(){
    cin >> n;
    getline(cin, t);
    getline(cin, s);
    /*
    ll l = 0, h = 1e7, mid, val;
    while(l <= h){
        mid = (l+h)/2;
        if(check(mid)) h = mid - 1, val = mid;
        else l = mid + 1;
    }
    cout << val << endl;
    */
    check(8);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
