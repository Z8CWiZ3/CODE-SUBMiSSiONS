#include <bits/stdc++.h>
int findPeakElement(vector<int> &arr)
{
    int l = 1;
    int r = arr.size() - 2;
    if (arr.size() == 1)
        return 0;
    if (arr[l - 1] > arr[l])
        return l - 1;
    if (arr[r + 1] > arr[r])
        return r + 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m - 1] < arr[m] && arr[m] > arr[m + 1])
            return m;
        else if (arr[m] > arr[m - 1])
            l = m + 1;
        else if (arr[m] > arr[m + 1])
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}
