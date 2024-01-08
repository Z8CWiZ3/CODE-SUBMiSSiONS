class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int l = 1;
        int r = nums.size() - 2;
        if (nums.size() == 1)
            return 0;
        if (nums[l - 1] > nums[l])
            return l - 1;
        if (nums[r + 1] > nums[r])
            return r + 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (nums[m - 1] < nums[m] && nums[m] > nums[m + 1])
                return m;
            else if (nums[m] > nums[m - 1])
                l = m + 1;
            else if (nums[m] > nums[m + 1])
                r = m - 1;
            else
                l = m + 1;
        }
        return -1;
    }
};
