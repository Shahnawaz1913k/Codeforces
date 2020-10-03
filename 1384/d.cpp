#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

// ll n;
// string s, t;

// ll check(ll x){
//     ll lcnt = 0;
//     ll cnt = 0, os = 0;
//     for(ll i = 0; i < s.length(); i++){
//         ++cnt;
//         cout << i << s[i]<< " " << cnt << " " << os << endl;
//         if(s[i] == '-' || s[i] == ' ') {
//             if(cnt <= x) os = cnt;
//             else {
//                 lcnt++;
//                 cnt -=os;
//                 os = cnt;
//                 if(cnt > x) {
//                     cout << "ins " << i << " " << cnt << endl;
//                     return 0;
//                 }
//             }
//         }
//     }
//     cout << cnt - os << "  ehaha " << lcnt << endl;
//     return (cnt - os > x || lcnt > n ? 0:1);
// }

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
  
	ios_base::sync_with_stdio(0), cin.tie(0);

	int test;
	cin >> test;
	while (test--)
	{
		int n;
		cin >> n;
		
		int x = 0;
		vector<int> a(n);
		for (auto &i : a)
		{
			cin >> i;
			x ^= i;
		}

		if (x == 0)
		{
			cout << "DRAW\n";
			continue;
		}

		for (int k = 30; k >= 0; --k)
			if (x >> k & 1)
			{
				vector<int> f(2);
				for (auto &i : a) ++f[i >> k & 1];
				if (f[1] % 4 == 3 && f[0] % 2 == 0)
					cout << "LOSE\n";
				else
					cout << "WIN\n";
				break;
			}
	}

	return 0;
}
