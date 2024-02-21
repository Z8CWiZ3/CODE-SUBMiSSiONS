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

#define vc_in(X, Y, Z)                                     vector<ll> X;\
                                             for (int i = 0; i < Y; i++)\
                                              {int Z; cin >> Z; X.pb(Z);}

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
#define LMIN                                                    LLONG_MIN
#define LMAX                                                    LLONG_MAX

// || ------------------------------------------------------------- || //

#define OD(XYZ)                                              XYZ % 2 == 1
#define EV(XYZ)                                              XYZ % 2 == 0

// || ------------------------------------------------------------- || //

#define is_srt(X)                                    is_sorted(entire(X))
#define is_eq(X, Y)                           equal(entire(X), Y.begin())
#define is_prm(X, Y)                 is_permutation(entire(X), Y.begin())

// || ------------------------------------------------------------- || //

#define ook(X, Y)                                       X.order_of_key(Y)
#define fbo(X, Y)                                      X.find_by_order(Y)

// || ------------------------------------------------------------- || //

#define str                                                        string
#define ps                                                           push
#define ins                                                        insert
#define pb                                                      push_back
#define ppb                                                    pop_back()
#define eb                                                   emplace_back
#define pf                                                     push_front
#define ppf                                                   pop_front()
#define pp                                                          pop()
#define ers                                                         erase
#define clr                                                       clear()
#define fs                                                          first
#define sc                                                         second
#define tp                                                          top()
#define ft                                                        front()
#define bk                                                         back()
#define mt                                                        empty()
#define brk                                                         break
#define con                                                      continue

// || ------------------------------------------------------------- || //

#define gcd(X, Y)                                             __gcd(X, Y)
#define lcm(X, Y)                                     (X * Y) / gcd(X, Y)
#define lwb(X, Y)                                        X.lower_bound(Y)
#define upb(X, Y)                                        X.upper_bound(Y)
#define lb(X, Y)                                lower_bound(entire(X), Y)
#define ub(X, Y)                                upper_bound(entire(X), Y)
#define src(X, Y)                             binary_search(entire(X), Y)

// || ------------------------------------------------------------- || //

#define en                                                           endl
#define sz                                                         size()
#define C(XYZ)                                                cout << XYZ
#define CE(XYZ)                                         cout << XYZ << en
#define every(X, Y)                                     for (auto &X : Y)
#define entire(XYZ)                                XYZ.begin(), XYZ.end()
#define rev(XYZ)                                     reverse(entire(XYZ))
#define rev_sort(XYZ)                      sort(entire(XYZ), greater<>())
#define i_t(X, Y)                                      iota(entire(X), Y)
#define mn_ele(X)                                 *min_element(entire(X))
#define mx_ele(X)                                 *max_element(entire(X))
#define stprcfx(XYZ)                           setprecision(XYZ) << fixed
#define fops(X, Y, Z)                        for (int X = Y; X <= Z; X++)
#define fpve(X, Y, Z)                  for (int i = X; i <= Y; i = i + Z)
#define fnve(X, Y, Z)                  for (int i = X; i >= Y; i = i - Z)

// || ------------------------------------------------------------- || //

#define ___TC                                             ll t; cin >> t;
#define ___O_SOLN                                               z8cwiz3()
#define ___M_SOLN                             ___TC while (t--) z8cwiz3()

// || ------------------------------------------------------------- || //

void YES_N()                                                 {CE("YES");}
void Yes_N()                                                 {CE("Yes");}
void YES()                                                    {C("YES");}
void Yes()                                                    {C("Yes");}

void NOO_N()                                                  {CE("NO");}
void Noo_N()                                                  {CE("No");}
void NOO()                                                     {C("NO");}
void Noo()                                                     {C("No");}

bool is_prime(int X)                          {if (X <= 1) return false;\
                                      for (int i = 2; i <= sqrt(X); i++)\
                                           if (X % i == 0) return false;\
                                                            return true;}

bool is_palindrome(const str &S)                {return equal(S.begin(),\
                                  S.begin() + S.size() / 2, S.rbegin());}

// || ------------------------------------------------------------- || //

const ll N = 2e5 + 83;
ll arr[N], TREE[4 * N];

// || ------------------------------------------------------------- || //

void build_upTREE(ll NODE, ll s, ll e)
{
    if (s == e)
    {
        TREE[NODE] = arr[s];
        return;
    }
    ll m = (s + e) / 2;
    build_upTREE(2 * NODE, s, m);
    build_upTREE(2 * NODE + 1, m + 1, e);
    TREE[NODE] = min(TREE[2 * NODE], TREE[2 * NODE + 1]);
}

// || ------------------------------------------------------------- || //

ll query_min(ll NODE, ll s, ll e, ll l, ll r)
{
    if (s > r || e < l)
        return LMAX;
    if (l <= s && e <= r)
        return TREE[NODE];
    ll m = (s + e) / 2;
    ll q_l = query_min(2 * NODE, s, m, l, r);
    ll q_r = query_min(2 * NODE + 1, m + 1, e, l, r);
    ll res = min(q_l, q_r);
    return res;
}

// || ------------------------------------------------------------- || //

void update_idx(ll NODE, ll s, ll e, ll idx, ll value)
{
    if (s == e)
    {
        arr[s] = value;
        TREE[NODE] = value;
        return;
    }
    ll m = (s + e) / 2;
    if (idx <= m)
        update_idx(2 * NODE, s, m, idx, value);
    else
        update_idx(2 * NODE + 1, m + 1, e, idx, value);
    TREE[NODE] = min(TREE[2 * NODE], TREE[2 * NODE + 1]);
}

// || ------------------------------------------------------------- || //

void z8cwiz3()
{
    ll n, k;
    cin >> n >> k;
    fops(i, 0, n - 1)
    {
        ll x;
        cin >> x;
        arr[i] = x;
    }
    build_upTREE(1, 0, n - 1);
    fops(i, 0, k - 1)
    {
        ll typ;
        cin >> typ;
        if (typ == 1)
        {
            ll idx, value;
            cin >> idx >> value;
            update_idx(1, 0, n - 1, idx - 1, value);
        }
        if (typ == 2)
        {
            ll l, r;
            cin >> l >> r;
            ll res = query_min(1, 0, n - 1, l - 1, r - 1);
            CE(res);
        }
    }
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___O_SOLN;

    return 0;
}