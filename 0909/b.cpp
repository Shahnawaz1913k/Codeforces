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
	string s = "223";
	int cnt = 0;
	// for(ll i = 0; i < 3; i++)
	// for(ll j = 0; j < 3; j++)
	// for(ll k = 0; k < 3; k++){
	// 	string x = c[i]+c[j]+c[k];
	// 	cout << x << endl;
	// 	// if(stoi(x)%7 == 0)++cnt;
	// }
	do{
		cout << s << endl;
		if(stoi(s)%7==0) ++cnt;
	} while(next_permutation(s.begin(), s.end()));
	cout << cnt << endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
