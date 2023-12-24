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
#define lb(X, Y)                     lower_bound(every(X), Y)
#define ub(X, Y)                     upper_bound(every(X), Y)
#define src(X, Y)                  binary_search(every(X), Y)

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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> v1;
    vector<int> v2;
    ll x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.pb(x);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        v2.pb(x);
    }
    sort(entire(v1));
    sort(entire(v2));
    ll i = 0;
    ll j = 0;
    ll cnt = 0;
    while (i != n && j != m)
    {
        if (v1[i] - k <= v2[j] && v1[i] + k >= v2[j])
        {
            cnt++;
            i++;
            j++;
        }
        else if (v1[i] > v2[j])
            j++;
        else
            i++;
    }
    cout << cnt;
}

// || ------------------------------------------------- || //

int main()
{
    XYZ YZX ZXY

        ___O_SOLN;

    return 0;
}