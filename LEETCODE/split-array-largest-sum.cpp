class Solution
{
public:
    bool cnt_split(vector<int> &nums, int k, int m)
    {
        int cnt = 1;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (sum + nums[i] <= m)
                sum += nums[i];
            else
            {
                cnt++;
                sum = nums[i];
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int> &nums, int k)
    {
        if (k > nums.size())
            return -1;
        int mx = *max_element(nums.begin(), nums.end());
        int sm = accumulate(nums.begin(), nums.end(), 0);
        int l = mx;
        int r = sm;
        int ans = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (cnt_split(nums, k, m))
            {
                r = m - 1;
                ans = m;
            }
            else
                l = m + 1;
        }
        return ans;
    }
};
