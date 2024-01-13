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
#define ins                                                        insert
#define pb                                                      push_back
#define eb                                                   emplace_back
#define pf                                                     push_front
#define pob                                                      pop_back
#define fs                                                          first
#define sc                                                         second
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

bool is_possible(ll cnt_B, ll cnt_S, ll cnt_C,
                 ll avl_B, ll avl_S, ll avl_C,
                 ll prc_B, ll prc_S, ll prc_C,
                 ll total_Rubles, ll m)
{
    ll need_B = cnt_B * m;
    ll need_S = cnt_S * m;
    ll need_C = cnt_C * m;
    ll miss_B = 0, miss_S = 0, miss_C = 0;
    if (need_B <= avl_B && need_S <= avl_S && need_C <= avl_C)
        return true;
    else
    {
        if (need_B > avl_B)
            miss_B += (need_B - avl_B) * prc_B;
        if (need_S > avl_S)
            miss_S += (need_S - avl_S) * prc_S;
        if (need_C > avl_C)
            miss_C += (need_C - avl_C) * prc_C;
    }
    ll need_Rubles = miss_B + miss_S + miss_C;
    return need_Rubles <= total_Rubles;
}

// || ------------------------------------------------------------- || //

void z8cwiz3()
{
    str s;
    cin >> s;
    ll avl_B, avl_S, avl_C;
    cin >> avl_B >> avl_S >> avl_C;
    ll prc_B, prc_S, prc_C;
    cin >> prc_B >> prc_S >> prc_C;
    ll total_Rubles;
    cin >> total_Rubles;
    ll cnt_B = 0, cnt_S = 0, cnt_C = 0;
    fpve(0, s.sz - 1, 1)
    {
        if (s[i] == 'B')
            cnt_B++;
        else if (s[i] == 'S')
            cnt_S++;
        else
            cnt_C++;
    }
    ll l = 0;
    ll r = 10e12 + 100;
    ll res = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (is_possible(cnt_B, cnt_S, cnt_C,
                        avl_B, avl_S, avl_C,
                        prc_B, prc_S, prc_C,
                        total_Rubles, m))
        {
            res = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    C(res);
}

// || ------------------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___O_SOLN;

    return 0;
}
