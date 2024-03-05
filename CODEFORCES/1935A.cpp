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

#define vc_in(X, Y, Z)                                     vector<ll> X;\
                                              for (ll i = 0; i < Y; i++)\
                                               {ll Z; cin >> Z; X.pb(Z);}

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

#define is_eql(X, Y)                          equal(entire(X), Y.begin())
#define is_srt(X)                                    is_sorted(entire(X))
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
#define srt(XYZ)                                        sort(entire(XYZ))
#define rev_srt(XYZ)                       sort(entire(XYZ), greater<>())
#define i_t(X, Y)                                      iota(entire(X), Y)
#define mn_ele(X)                                 *min_element(entire(X))
#define mx_ele(X)                                 *max_element(entire(X))
#define stprcfx(XYZ)                           setprecision(XYZ) << fixed
#define fops(X, Y, Z)                         for (ll X = Y; X <= Z; X++)
#define fpve(X, Y, Z)                   for (ll i = X; i <= Y; i = i + Z)
#define fnve(X, Y, Z)                   for (ll i = X; i >= Y; i = i - Z)
#define fexe(X, Y, Z, XYZ)                    for (ll X = Y; X <= Z; XYZ)

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

bool is_prime(ll X)                           {if (X <= 1) return false;\
                                       for (ll i = 2; i <= sqrt(X); i++)\
                                           if (X % i == 0) return false;\
                                                            return true;}

bool is_palindrome(const str &S)                {return equal(S.begin(),\
                                  S.begin() + S.size() / 2, S.rbegin());}

vector<ll> pref_func(const str &S)           {vector<ll> res_func(S.sz);\
                                   res_func[0] = 0; fops(i, 1, S.sz - 1)\
                  {ll j = res_func[i - 1]; while (j > 0 && S[i] != S[j])\
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

void z8cwiz3()
{
    ll n;
    cin >> n;
    str s1;
    cin >> s1;
    str tmp = s1;
    rev(tmp);
    str s2 = tmp + s1;
    if (s1 <= s2)
        CE(s1);
    else
        CE(s2);
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___M_SOLN;

    return 0;
}
