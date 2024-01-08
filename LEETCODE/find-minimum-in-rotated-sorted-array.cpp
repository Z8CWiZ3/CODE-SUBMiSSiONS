class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        int ans = INT_MAX;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (nums[l] <= nums[r])
            {
                ans = min(ans, nums[l]);
                break;
            }
            if (nums[l] <= nums[m])
            {
                ans = min(ans, nums[l]);
                l = m + 1;
            }
            else
            {
                ans = min(ans, nums[m]);
                r = m - 1;
            }
        }
        return ans;
    }
};
