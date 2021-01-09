#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    priority_queue<ll> q,p;
    pan(i,n){
        cin >> v[i];
        q.push(v[i]);
        p.push(-v[i]);
    }
    ll dif = q.top()-p.top();
    while
}

int main(){
    int x = 1;
    while(x--) solve();
}
