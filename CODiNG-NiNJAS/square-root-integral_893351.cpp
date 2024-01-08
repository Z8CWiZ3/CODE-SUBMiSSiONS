#include <bits/stdc++.h>
int floorSqrt(int n)
{
    int l = 1;
    int r = n;
    while (l <= r)
    {
        long long m = (l + r) / 2;
        long long v = m * m;
        if (v <= n)
            l = m + 1;
        else
            r = m - 1;
    }
    return r;
}
