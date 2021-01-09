#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n;
    cin >> n;
    int a[n+1];
    pair<ll, ll> p[n+1];
    for(int i = 1; i <= n; i++) p[i].first = 0, p[i].second = i;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        p[a[i]].first += i;
    }
    sort(p, p+n+1);
    cout << p[n].second << endl;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
