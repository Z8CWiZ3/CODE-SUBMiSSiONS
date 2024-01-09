#include <bits/stdc++.h>
bool is_possible(vector<int> &stalls, int k, int m)
{
    int cnt = 1;
    int last_ball = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last_ball >= m)
        {
            cnt++;
            last_ball = stalls[i];
        }
    }
    return cnt >= k;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int l = 1;
    int r = stalls.back() - stalls.front();
    int ans = stalls.size();
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (is_possible(stalls, k, m))
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}
