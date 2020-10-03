#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

/*void solve(){
    ll n, k, l;
    cin >> n >> k >> l;
    ll a[n];
    vector<ll> v;
    v.push_back(0);
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[i] + k <= l) v.push_back(i);
    }
    v.push_back(n+1);
    for(ll i = 1; i < v.size(); i++){
        //cout << v[i-1] << " " << v[i] << endl;
        ll t = k, d = 1;
        for(ll j = v[i-1]+1; j < v[i]; j++){
            t += (d ? -1:1);
            if(d && a[j] + t > l) t = l-a[j];
            if(a[j]+t > l || t < 0){
                cout << "no" << endl;
                return;
            }
            if(t == 0) d = 0;
        }
    }
    cout << "yes" << endl;
}*/

int main(){
  ios_base::sync_with_stdio(0), cin.tie(0);

	int test;
	cin >> test;
	while (test--)
	{
		int n, k, l;
		cin >> n >> k >> l;
		vector<int> d(n+1), safe = { 0 };
		for (int i = 1; i <= n; ++i)
		{
			cin >> d[i];
			if (d[i] + k <= l)
				safe.push_back(i);
		}

		safe.push_back(n+1);
		bool ok = true;
		for (size_t i = 1; i < safe.size() && ok; ++i)
		{
			int tide = k; bool down = true;
			for (int j = safe[i-1] + 1; j < safe[i]; ++j)
			{
				tide += down ? -1 : +1;

				if (down) tide -= max(0, d[j] + tide - l);
				if (tide < 0 || d[j] + tide > l) { ok = false; break; }

				if (tide == 0) down = false;
			}
		}

		if (ok) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
