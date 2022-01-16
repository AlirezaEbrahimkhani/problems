#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define ins insert
#define ll long long int
#define ld long double
#define endl '\n'
ll mod = 1000000007;

ll fact[1000001]; // stores factorial value
void fac()
{
    fact[0] = 1;
    for (int i = 1; i <= 1000000; i++)
        fact[i] = fact[i - 1] * i;
}
void BOOST()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll power(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
ll modInverse(ll n) { return power(n, mod - 2); }
ll min(ll a, ll b)
{
    if (b <= a)
        return b;
    return a;
}
ll max(ll a, ll b)
{
    if (a >= b)
        return a;
    return b;
}
ll ncr(ll n, ll r)
{
    if (r == 0)
        return 1;
    return ((((fact[n] % mod) * (modInverse(fact[r]) % mod)) % mod) * (modInverse(fact[n - r]) % mod)) % mod;
}

int main()
{
    BOOST();
    int n, l, r, ql, qr;
    cin >> n >> l >> r >> ql >> qr;
    vector<int> weights(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> weights[i];

    vector<ll> suml(n + 1), sumr(n + 2);
    suml[0] = 0;
    suml[1] = weights[1];
    sumr[n + 1] = 0;
    sumr[n] = weights[n];

    for (ll i = 2; i <= n; i++)
        suml[i] = weights[i] + suml[i - 1];
    for (ll i = n - 1; i >= 1; i--)
        sumr[i] = weights[i] + sumr[i + 1];
    ll ans = INT_MAX;

    for (ll i = 0; i <= n; i++)
    {
        ll curr = (l * suml[i]) + (r * sumr[i + 1]);
        if (i > ceil(n / 2))
            curr += ((2 * i) - n - 1) * ql;
        if (i < (n / 2))
            curr += (n - (2 * i) - 1) * qr;

        ans = min(ans, curr);
    }
    cout << ans << endl;
}