#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

set<int> adj[1010];

void solve(){
    int n;
    cin >> n;
    for(ll i = 1; i < n; i++){
        int x, y;
        cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    set<int> st;
    for(int i = 1; i <= n; i++) if(adj[i].size() == 1) st.insert(i);
    for(int i = 0; i < n/2; i++){
        int x = *st.begin();
        st.erase(x);
        int y = *st.begin(), val;
        st.erase(y);
        cout.flush();
        cout << "? "<< x << " " << y << endl;
        cin >> val;
        if(val == -1) return;
        if(val == x || val == y){
            cout <<"! " << val << endl;
            return;
        }
        for(ll i = 1; i <= n; i++) if(adj[i].find(x) != adj[i].end() || adj[i].find(y) != adj[i].end()){
            adj[i].erase(x);
            adj[i].erase(y);
            if(adj[i].size() == 1) st.insert(i);
        }
        if(st.size() == 0){
            cout <<"! " << val << endl;
            return;
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
