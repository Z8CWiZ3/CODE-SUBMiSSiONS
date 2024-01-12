#include <bits/stdc++.h>
bool cnt_painters(vector<int> &boards, int k, int m)
{
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        if (sum + boards[i] <= m)
            sum += boards[i];
        else
        {
            cnt++;
            sum = boards[i];
        }
    }
    return cnt <= k;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    if (k > boards.size())
        return -1;
    int mx = *max_element(boards.begin(), boards.end());
    int sm = accumulate(boards.begin(), boards.end(), 0);
    int l = mx;
    int r = sm;
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (cnt_painters(boards, k, m))
        {
            r = m - 1;
            ans = m;
        }
        else
            l = m + 1;
    }
    return ans;
}
