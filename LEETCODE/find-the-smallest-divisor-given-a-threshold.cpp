class Solution
{
public:
    bool is_possible(vector<int> &nums, int threshold, int m)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += ceil(nums[i] * 1.0 / m);
        return sum <= threshold;
    }
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int mx = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
            mx = max(mx, nums[i]);
        int l = 1;
        int r = mx;
        int ans = nums.size();
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (is_possible(nums, threshold, m))
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
