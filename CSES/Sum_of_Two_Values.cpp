// || ------------------------------------------------- || //
// || ------   (BRAiN == DEAD) ? SLEEP : CODE!   ------ || //
// || ------------------------------------------------- || //
// || ---   !NOTHiNG iZ iMPOSSiBLE , KEEP TRYiNG!   --- || //
// || ------------------------------------------------- || //
// || -----------------   (Z8CWiZ3)   ----------------- || //
// || ---------   ! KEEP ME iN YOUR HEART !   --------- || //
// || ------------------------------------------------- || //

#include                                      <bits/stdc++.h>
using                   namespace                        std;

// || ------------------------------------------------- || //

#define XYZ                     ios_base::sync_with_stdio(0);
#define YZX                                       cin.tie(0),
#define ZXY                                      cout.tie(0);

// || ------------------------------------------------- || //

#define ull                                unsigned long long
#define uin                                      unsigned int
#define ll                                          long long
#define db                                             double

// || ------------------------------------------------- || //

#define MIN                                           INT_MIN
#define MAX                                           INT_MAX

// || ------------------------------------------------- || //

#define str                                            string
#define ins                                            insert
#define pb                                          push_back
#define pf                                         push_front
#define fs                                              first
#define sc                                             second
#define ft                                            front()
#define bk                                             back()
#define brk                                             break
#define con                                          continue

// || ------------------------------------------------- || //

#define gcd(X, Y)                                 __gcd(X, Y)
#define lcm(X, Y)                         (X * Y) / gcd(X, Y)
#define lb(X, Y)                    lower_bound(entire(X), Y)
#define ub(X, Y)                    upper_bound(entire(X), Y)
#define src(X, Y)                 binary_search(entire(X), Y)

// || ------------------------------------------------- || //

#define en                                               endl
#define sz                                             size()
#define C(XYZ)                                    cout << XYZ
#define CE(XYZ)                             cout << XYZ << en
#define entire(XYZ)                    XYZ.begin(), XYZ.end()
#define fpve(X, Y, Z)      for (int i = X; i <= Y; i = i + Z)
#define fnve(X, Y, Z)      for (int i = X; i >= Y; i = i - Z)

// || ------------------------------------------------- || //

#define ___TC                                 ll t; cin >> t;
#define ___O_SOLN                                   z8cwiz3()
#define ___M_SOLN                 ___TC while (t--) z8cwiz3()

// || ------------------------------------------------- || //

void z8cwiz3()
{
    int n;
    cin >> n;
    ll t_sum;
    cin >> t_sum;
    vector<pair<ll, ll>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.pb({x, i});
    }
    sort(entire(v));
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        if (v[l].fs + v[r].fs < t_sum)
            l++;
        else if (v[l].fs + v[r].fs > t_sum)
            r--;
        else
        {
            cout << min(v[l].sc, v[r].sc);
            cout << " ";
            cout << max(v[l].sc, v[r].sc);
            return;
        }
    }
    cout << "IMPOSSIBLE";
}

// || ------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___O_SOLN;

    return 0;
}