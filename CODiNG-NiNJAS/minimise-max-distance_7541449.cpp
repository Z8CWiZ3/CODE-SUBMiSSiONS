#include <bits/stdc++.h>
bool is_possible(vector<int> &arr, int k, long double m)
{
    int cnt = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int num_Between = (arr[i + 1] - arr[i]) / m;
        if ((arr[i + 1] - arr[i]) / m == num_Between * m)
            num_Between--;
        cnt += num_Between;
    }
    return cnt <= k;
}
int find_MaxDiff(vector<int> &arr)
{
    int n = arr.size();
    int mx = 0;
    for (int i = 0; i < n - 1; i++)
        mx = max(mx, (arr[i + 1] - arr[i]));
    return mx;
}
double minimiseMaxDistance(vector<int> &arr, int k)
{
    long double l = 0;
    long double r = find_MaxDiff(arr);
    long double diff = 1e-6;
    long double ans = r;
    while (r - l > diff)
    {
        long double m = (l + r) / 2.0;
        if (is_possible(arr, k, m))
        {
            ans = m;
            r = m;
        }
        else
            l = m;
    }
    return ans;
}
