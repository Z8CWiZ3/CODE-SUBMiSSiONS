#include <bits/stdc++.h>
int findKRotation(vector<int> &arr)
{
    int l = 0;
    int r = arr.size() - 1;
    int ans = INT_MAX;
    int idx = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[l] <= arr[r])
        {
            if (arr[l] <= ans)
            {
                ans = arr[l];
                idx = l;
            }
            break;
        }
        if (arr[l] <= arr[m])
        {
            if (arr[l] <= ans)
            {
                ans = arr[l];
                idx = l;
            }
            l = m + 1;
        }
        else
        {
            if (arr[m] <= ans)
            {
                ans = arr[m];
                idx = m;
            }
            r = m - 1;
        }
    }
    return idx;
}
