#include <bits/stdc++.h>
int func(int MID, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * MID;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}
int NthRoot(int n, int m)
{
    int l = 1;
    int r = m;
    while (l <= r)
    {
        int MID = (l + r) / 2;
        int MID_N = func(MID, n, m);
        if (MID_N == 1)
            return MID;
        else if (MID_N == 0)
            l = MID + 1;
        else
            r = MID - 1;
    }
    return -1;
}
