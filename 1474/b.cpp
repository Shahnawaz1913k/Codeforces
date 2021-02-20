#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> v;
ll prime[200020];

void soe(){
    for(ll i = 2; i < 200020; i++){
        if(prime[i]) continue;
        v.push_back(i);
        for(ll j = 2*i; j < 200020; j+=i) prime[j] = 10;
    }
}

void solve(){
    ll d, time = 0;
    cin >> d;
    ll cnt = 1;
    for(auto &i: v)if(cnt + d <= i){
        cnt *= i;
        time++;
        if(time == 2) {
            cout << cnt << endl;
            return;
        }
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  soe();
  int t;cin>>t;while(t--)
  solve();
  return 0;
}
