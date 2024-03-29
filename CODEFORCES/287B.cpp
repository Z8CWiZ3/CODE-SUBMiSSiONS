// || ------------------------------------------------------------- || //
// || ------------   (BRAiN == DEAD) ? SLEEP : CODE!   ------------ || //
// || ------------------------------------------------------------- || //
// || ---------   !NOTHiNG iZ iMPOSSiBLE , KEEP TRYiNG!   --------- || //
// || ------------------------------------------------------------- || //
// || -----------------------   (Z8CWiZ3)   ----------------------- || //
// || ---------------   ! KEEP ME iN YOUR HEART !   --------------- || //
// || ------------------------------------------------------------- || //

#include                                                  <bits/stdc++.h>
#include                                  <ext/pb_ds/assoc_container.hpp>
#include                                      <ext/pb_ds/tree_policy.hpp>
using                          namespace                             std;
using                          namespace                      __gnu_pbds;

// || ------------------------------------------------------------- || //

#define ordered_set                                tree<int, null_type, \
                                                             less<int>, \
                                                           rb_tree_tag, \
                                       tree_order_statistics_node_update>

#define ordered_multiset                           tree<int, null_type, \
                                                       less_equal<int>, \
                                                           rb_tree_tag, \
                                       tree_order_statistics_node_update>

// || ------------------------------------------------------------- || //

#define XYZ                                 ios_base::sync_with_stdio(0);
#define YZX                                                   cin.tie(0),
#define ZXY                                                  cout.tie(0);

// || ------------------------------------------------------------- || //

#define ull                                            unsigned long long
#define uin                                                  unsigned int
#define ll                                                      long long
#define db                                                         double

// || ------------------------------------------------------------- || //

#define MIN                                                       INT_MIN
#define MAX                                                       INT_MAX

// || ------------------------------------------------------------- || //

#define str                                                        string
#define ins                                                        insert
#define pb                                                      push_back
#define pf                                                     push_front
#define fs                                                          first
#define sc                                                         second
#define ft                                                        front()
#define bk                                                         back()
#define brk                                                         break
#define con                                                      continue

// || ------------------------------------------------------------- || //

#define gcd(X, Y)                                             __gcd(X, Y)
#define lcm(X, Y)                                     (X * Y) / gcd(X, Y)
#define lb(X, Y)                                lower_bound(entire(X), Y)
#define ub(X, Y)                                upper_bound(entire(X), Y)
#define src(X, Y)                             binary_search(entire(X), Y)

// || ------------------------------------------------------------- || //

#define en                                                           endl
#define sz                                                         size()
#define C(XYZ)                                                cout << XYZ
#define CE(XYZ)                                         cout << XYZ << en
#define entire(XYZ)                                XYZ.begin(), XYZ.end()
#define fpve(X, Y, Z)                  for (int i = X; i <= Y; i = i + Z)
#define fnve(X, Y, Z)                  for (int i = X; i >= Y; i = i - Z)

// || ------------------------------------------------------------- || //

#define ___TC                                             ll t; cin >> t;
#define ___O_SOLN                                               z8cwiz3()
#define ___M_SOLN                             ___TC while (t--) z8cwiz3()

// || ------------------------------------------------------------- || //

bool is_possible(ll n, ll k, ll m)
{
    ll mx = k - 1;
    ll mn = mx - m + 1;
    ll cnt = (mx + mn) * m / 2;
    cnt++;
    return cnt >= n;
}

// || ------------------------------------------------------------- || //

void z8cwiz3()
{
    ll n, k;
    cin >> n >> k;
    if (n < 2)
    {
        cout << 0;
        return;
    }
    ll l = 1;
    ll r = k - 1;
    ll res = -1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (is_possible(n, k, m))
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << res;
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___O_SOLN;

    return 0;
}
