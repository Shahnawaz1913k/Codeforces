#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(){
    int n, q;
    cin >> n;
    int a[n], mp[n+1] = {0};
    for(int i = 0; i < n; i++) cin >> a[i], mp[a[i]]++;
    multiset<int> ms;
    ms.insert(0);
    ms.insert(0);
    ms.insert(0);
    cin >> q;
    for(int i = 0; i <= n; i++) ms.insert(mp[i]);
    while (q--)
    {
        char c; int x;
        cin >> c >> x;
        ms.erase(ms.find(mp[x]));
        c == '+' ? ++mp[x]: --mp[x];
        ms.insert(mp[x]);
        auto it = ms.rbegin();
        int val = *it;
        if(val < 4){
            cout << "no" << endl;
            continue;
        } else if(val >= 8){
            cout << "yes" << endl;
            continue;
        }
        ++it;
        int val2 = *it;
        ++it;
        int val3 = *it;
        if(val <= 5) {
                if(val2 >= 4 || (val2 >= 2 && val3 >= 2)) cout << "YES" << endl;
                else cout << "NO" << endl;
        } else {
            if(val2 >= 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //int t;cin>>t;while(t--)
  solve();
  return 0;
}
