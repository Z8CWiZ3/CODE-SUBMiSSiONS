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

int DX[4] = {-1, 1, -1, 1};
int DY[4] = {-1, -1, 1, 1};

// || ------------------------------------------------- || //

void z8cwiz3()
{
    int kpm1, kpm2;
    cin >> kpm1 >> kpm2;
    int xK, yK;
    cin >> xK >> yK;
    int xQ, yQ;
    cin >> xQ >> yQ;
    set<pair<int, int>> stK;
    set<pair<int, int>> stQ;
    fpve(0, 3, 1)
    {
        stK.ins({xK + DX[i] * kpm1, yK + DY[i] * kpm2});
        stK.ins({xK + DX[i] * kpm2, yK + DY[i] * kpm1});
        stQ.ins({xQ + DX[i] * kpm1, yQ + DY[i] * kpm2});
        stQ.ins({xQ + DX[i] * kpm2, yQ + DY[i] * kpm1});
    }
    int cnt = 0;
    for (auto X : stK)
        if (stQ.find(X) != stQ.end())
            cnt++;
    cout << cnt << en;
}

// || ------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___M_SOLN;

    return 0;
}
