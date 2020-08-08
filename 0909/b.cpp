#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// void solve(){
//     ll n, cnt = 0;
//     cin >> n;
//     for(ll i = 0; i < n; ++i) cnt += min(i+1, n-i);
//     cout << cnt << endl;
//     // vector<pair<ll, ll> > v;
//     // for(ll i = 0; i < n; ++i)
//     //     for(ll j = i+1; j <= n; ++j){
//     //         v.push_back({i, j});
//     //     }
//     // for(ll i = 0; i <= n; ++i){
//     //     ll x = 0;
//     //     for(auto &k: v) if()
//     // }
// }

void solve(){
	int  n, k;
	cin >> n >> k;
	int a[n];
	multiset<int> ms;
	for(int i = 0; i < n; ++i) cin >> a[i], ms.insert(a[i]);
	while(k--){
		int x = *ms.rbegin();
		ms.erase(ms.find(x));
		ms.insert(floor(x/2));
	}
	int cnt = 0;
	for(auto &i: ms) cnt += i;
	cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
