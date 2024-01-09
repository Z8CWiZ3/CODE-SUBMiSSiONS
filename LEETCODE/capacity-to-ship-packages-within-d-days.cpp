class Solution
{
public:
    bool find_Days(vector<int> &weights, int days, int m)
    {
        int sum = 0;
        int cnt = 1;
        for (int i = 0; i < weights.size(); i++)
        {
            if (weights[i] + sum > m)
            {
                cnt++;
                sum = weights[i];
            }
            else
                sum += weights[i];
        }
        return cnt <= days;
    }
    int shipWithinDays(vector<int> &weights, int days)
    {
        int max_v = INT_MIN;
        int max_sum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            max_v = max(max_v, weights[i]);
            max_sum += weights[i];
        }
        int l = max_v;
        int r = max_sum;
        int ans = weights.size();
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (find_Days(weights, days, m))
            {
                ans = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        return ans;
    }
};
