#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

/*void solve(){
    ll n, k, l;
    cin >> n >> k >> l;
    ll a[n], t[2*k];
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i <= k; i++) t[i] = i;
    for(ll i = 1; i <= k ;i++) t[2*k-i] = i;

    ll pos = k;
    for(ll i = 0; i < n; i++) {
        //cout << i << " " << pos << " " << a[i] << " " << t[pos%(2*k)] << endl;
        if(a[i] > l){
            cout << "no" << endl;
            return;
        }
        if(a[i] + k <= l) pos = k;
        else {
            if(pos%(2*k) >= k) { 
                //cout << "here " << pos << endl;
                if(t[pos%(2*k)] + a[i] <= l) pos++;
                else while(t[pos%(2*k)] + a[i] > l) pos++;
            } else if(t[pos%(2*k)+1] + a[i] > l){
               cout << "no"  << endl;
               return;
            } else pos++;
        }
    }
    cout << "yes" << endl;
}
*/
int main(){
  ios_base::sync_with_stdio(0), cin.tie(0);

	int test;
	cin >> test;
	while (test--)
	{
		int n, k, l;
		cin >> n >> k >> l;
		vector<int> d(n+2, -k);
		for (int i = 1; i <= n; ++i)
			cin >> d[i];

		set<tuple<int, int, bool>> mark;
		function<bool(int, int, bool)> go = [&](int pos, int tide, bool down)
		{
			if (pos > n) return true;
			
			if (mark.find({ pos, tide, down }) != mark.end())
				return false;

			mark.insert({ pos, tide, down });

			tide += down ? -1 : +1;
			if (tide == 0) down = false;
			if (tide == k) down = true;

			if (d[pos] + tide <= l && go(pos, tide, down))
				return true;
			if (d[pos + 1] + tide <= l && go(pos + 1, tide, down))
				return true;
			return false;
		};

		if (go(0, 0, false)) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
