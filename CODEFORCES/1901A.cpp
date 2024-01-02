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

void z8cwiz3()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        v.pb(k);
    }
    if (n == 1)
    {
        cout << max(v.ft, (x - v.ft) * 2) << en;
        return;
    }
    ll mx = MIN;
    for (int i = 0; i < n - 1; i++)
        mx = max(v.ft, max(mx, abs(v[i] - v[i + 1])));
    cout << max(mx, (x - v.bk) * 2) << en;
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___M_SOLN;

    return 0;
}
