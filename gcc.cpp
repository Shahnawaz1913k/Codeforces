
ll cnt(ll n , vector<ll> arr){
    pair<int, int> p[n];
    for(ll i = 0; i < n; ++i) p[i] = {a[i], i};
    sort(a, a+n);
    ll val = 0;
    for(ll i = 0; i < n; ++i){
        if(p[0].second == i) 
    }
}

ll func(int n, int x, int y, int z, int t, int a[]){
    int val1= 0, val2 = 0;
    for(ll i = x-1; i < z; ++i) val1 = (val1^a[i]);
    for(ll i = y-1; i < t; ++i) val2 = (val2^a[i]);
    return val1&val2;
}