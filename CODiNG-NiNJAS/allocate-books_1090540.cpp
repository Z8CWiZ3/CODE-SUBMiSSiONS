#include <bits/stdc++.h>
bool cnt_St(vector<int> &arr, int n, int m, int MD)
{
    int cnt = 1;
    int pages_St = 0;
    for (int i = 0; i < n; i++)
    {
        if (pages_St + arr[i] <= MD)
            pages_St += arr[i];
        else
        {
            cnt++;
            pages_St = arr[i];
        }
    }
    return cnt <= m;
}
int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;
    int mx = *max_element(arr.begin(), arr.end());
    int sm = accumulate(arr.begin(), arr.end(), 0);
    int l = mx;
    int r = sm;
    int ans = -1;
    while (l <= r)
    {
        int MD = (l + r) / 2;
        if (cnt_St(arr, n, m, MD))
        {
            r = MD - 1;
            ans = MD;
        }
        else
            l = MD + 1;
    }
    return ans;
}
