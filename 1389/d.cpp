#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    ll n, k, l1, r1, l2, r2, cnt = 0;
    cin >> n >> k >> l1 >> r1 >> l2 >> r2;
    if(l1 > l2) swap(l1, l2), swap(r1, r2);
    cout << l1 << " - " << r1 << endl;
    cout << l2 << " - " << r2 << endl;
    if(r1 >= l2){
        ll in = abs(max(l1, l2) - min(r1, r2)) + 1;
        ll li = max(r1, r2) - min(l1, l2) + 1 - in;
        if(in*n < k) {
            k -=in*n;
            if(li*n >= k) cnt += k;
            else {
                k -= li*n;
                cnt += (li*n + 2*k);
            }
        }
    } else {
        ll d = l2 - r1, in = (r1 - l1) + (r2 - l2) + 2;
        ll c = d + in - 1;
        cout << in << " " << d << " " << c << endl;
        if(k <= in) cnt += d+k, cout << "fdas3" << endl;
        else {
            if(c > 2*in) cnt += (c + 2*(k-in)), cout << "fdas4" << endl;
            else {
                cnt += min(n, k/in)*c;
                k -= min(n, k/in)*in;
                if(n <= k/in) cnt += k*2;
                else cnt += min(2*k, d+k);
                cout << "fdas5" << endl;
            }
        }
    }
    cout << cnt <<endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
