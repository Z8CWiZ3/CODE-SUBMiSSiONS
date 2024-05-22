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

#define ordered_set                                 tree<ll, null_type, \
                                                              less<ll>, \
                                                           rb_tree_tag, \
                                       tree_order_statistics_node_update>

#define ordered_multiset                            tree<ll, null_type, \
                                                        less_equal<ll>, \
                                                           rb_tree_tag, \
                                       tree_order_statistics_node_update>

#define vc_in(x, y, Z)                                     vector<ll> x;\
                                              for (ll i = 0; i < y; i++)\
                                               {ll Z; cin >> Z; x.pb(Z);}

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

#define is_eql(x, y)                          equal(entire(x), y.begin())
#define is_srt(x)                                    is_sorted(entire(x))
#define is_prm(x, y)                 is_permutation(entire(x), y.begin())

// || ------------------------------------------------------------- || //

#define ook(x, y)                                       x.order_of_key(y)
#define fbo(x, y)                                      x.find_by_order(y)

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

#define gcd(x, y)                                             __gcd(x, y)
#define lcm(x, y)                                     (x * y) / gcd(x, y)
#define lwb(x, y)                                        x.lower_bound(y)
#define upb(x, y)                                        x.upper_bound(y)
#define lb(x, y)                                lower_bound(entire(x), y)
#define ub(x, y)                                upper_bound(entire(x), y)
#define src(x, y)                             binary_search(entire(x), y)

// || ------------------------------------------------------------- || //

#define en                                                           endl
#define sz                                                         size()
#define C(XYZ)                                                cout << XYZ
#define CE(XYZ)                                         cout << XYZ << en
#define every(x, y)                                     for (auto &x : y)
#define entire(XYZ)                                XYZ.begin(), XYZ.end()
#define rev(XYZ)                                     reverse(entire(XYZ))
#define srt(XYZ)                                        sort(entire(XYZ))
#define rev_srt(XYZ)                       sort(entire(XYZ), greater<>())
#define i_t(x, y)                                      iota(entire(x), y)
#define mn_ele(x)                                 *min_element(entire(x))
#define mx_ele(x)                                 *max_element(entire(x))
#define stprcfx(XYZ)                           setprecision(XYZ) << fixed
#define fops(x, y, Z)                         for (ll x = y; x <= Z; x++)
#define fpve(x, y, Z)                   for (ll i = x; i <= y; i = i + Z)
#define fnve(x, y, Z)                   for (ll i = x; i >= y; i = i - Z)
#define fexe(x, y, Z, XYZ)                    for (ll x = y; x <= Z; XYZ)

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

// || ------------------------------------------------------------- || //

bool is_palindrome(const str &S)                {return equal(S.begin(),\
                                  S.begin() + S.size() / 2, S.rbegin());}

vector<ll> pref_func(const str &S)           {vector<ll> res_func(S.sz);\
                                   res_func[0] = 0; fops(i, 1, S.sz - 1)\
                                                {ll j = res_func[i - 1];\
                                           while (j > 0 && S[i] != S[j])\
                                  j = res_func[j - 1]; if (S[i] == S[j])\
                                                  j++; res_func[i] = j;}\
                                                        return res_func;}

vector<ll> z_func(const str &S)              {vector<ll> res_func(S.sz);\
                                       ll l = 0, r = 0; res_func[0] = 0;\
                                        fops(i, 1, S.sz - 1) {if (i < r)\
                              res_func[i] = min(r - i, res_func[i - l]);\
                                           while (i + res_func[i] < S.sz\
                                && S[res_func[i]] == S[i + res_func[i]])\
                                 res_func[i]++; if (i + res_func[i] > r)\
                                          {l = i; r = i + res_func[i];}}\
                                                        return res_func;}

// || ------------------------------------------------------------- || //

ll mod_expo(ll N, ll K, ll M)                     {if (K == 0) return 1;\
                                    ll res_func = mod_expo(N, K / 2, M);\
                                                       if (OD(K)) return\
                                  (((res_func * res_func) % M) * N) % M;\
                                                       if (EV(K)) return\
                                              (res_func * res_func) % M;}

bool is_prime(ll x)                           {if (x <= 1) return false;\
                                      for (ll i = 2; i <= sqrtl(x); i++)\
                                           if (x % i == 0) return false;\
                                                            return true;}

set<ll> every_divs(ll x)                              {set<ll> res_func;\
                                     fops(i, 1, sqrtl(x)) {if (!(x % i))\
                                {res_func.ins(i); res_func.ins(x / i);}}\
                                                        return res_func;}

vector<bool> sieve_of_era(ll x)         {vector<bool> is_prime(x, true);\
                                      is_prime[0] = is_prime[1] = false;\
                                   fops(i, 2, sqrt(x)) {if (is_prime[i])\
                                              {fexe(j, i * i, x, j += i)\
                                                  is_prime[j] = false;}}\
                                                        return is_prime;}

vector<ll> smallest_prime_fac(ll x)         {vector<ll> res_func(x, -1);\
                                   fops(i, 2, x) {if (res_func[i] == -1)\
                                                  {fexe(j, i, x, j += i)\
                                                 {if (res_func[j] == -1)\
                                                     res_func[j] = i;}}}\
                                                        return res_func;}

vector<ll> prime_facs(ll x, vector<ll> V)          {vector<ll> res_func;\
                                                           while (x > 1)\
                                              {res_func.push_back(V[x]);\
                                                             x /= V[x];}\
                                                        return res_func;}

vector<ll> prefix_sum(vector<ll> V)      {vector<ll> res_func(V.sz + 1);\
                                       res_func[0] = 0; fops(i, 1, V.sz)\
                               res_func[i] = res_func[i - 1] + V[i - 1];\
                                                        return res_func;}

// || ------------------------------------------------------------- || //

void z8cwiz3()
{
    ll x, y;
    cin >> x >> y;
    ll res_cnt = -1;
    fops(i, 0, min((ll)x, (ll)y))
    {
        if ((x - i) % 3 == 0 && (y - i) % 3 == 0)
        {
            res_cnt = i;
            brk;
        }
    }
    CE(res_cnt);
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___M_SOLN;

    return 0;
}
