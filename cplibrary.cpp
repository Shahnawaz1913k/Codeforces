##################################| FENWICK - TREE |#####################################
Valid for Range Update and point query

struct{
	
	ll bit[n];

	void add(ll indx, ll val){
		for(++indx; indx < n; indx += indx&-indx) bit[indx]	+= val;
	}

	void rangeAdd(ll l, ll r, ll val){
		add(l, val); add(r + 1, -val);
	}

	ll pointQuery(ll indx){
		ll ret = 0;
		for(++indx; indx > 0; indx -= indx&-indx) ret += bit[indx];
		return ret;
	}
} f0;

##################################|SEIVE|#################################################

----------------TO-CHECK PRIME TILL -N------------------
ll n;
vector<char> is_prime(n+1, true);
is_prime[0] = is_prime[1] = false;
for (ll i = 2; i * i <= n; i++) {
    if (!is_prime[i]) continue;
    for (ll j = i * i; j <= n; j += i)   is_prime[j] = false;
}

---------------------count-prime----------------------

ll count_primes(ll n) {
    const ll S = 10000;

    vector<ll> primes;
    ll nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 1, true);
    for (ll i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= nsqrt; j += i) is_prime[j] = false;
        }
    }

--------------------prime-factors- with count-------------

vector<ll> primes;

vector<ll> trial_division4(ll  n) {
    vector<ll> factorization;
    for (ll  d : primes) {
        if (d * d > n)  break;
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)  factorization.push_back(n);
    return factorization;
}


