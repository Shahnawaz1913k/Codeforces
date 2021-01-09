#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll tcnt = 0;
    for(int i = 0; i <= n - 4; i++) {
        int cnt = 0;
        int f[3030] = {0}, b[3030] = {0};
        for(int j = i+3; j < n; j++) b[a[j]]++;
        f[a[i+1]]++;
        for(int j = i+2; j < n - 1; j++) {
            cnt += b[a[j-1]];
            f[a[j-1]]--;
            cnt -= f[a[j]];
            f[a[j-1]]++;
            //cout << i << " - " << j << " | " << cnt << " " << tcnt << endl;
            if(a[j] == a[i]) tcnt += cnt;
            f[a[j]]++; b[a[j+1]]--;
        }
    }
    cout << tcnt << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  ll t;cin>>t;while(t--)
  solve();
  return 0;
}
