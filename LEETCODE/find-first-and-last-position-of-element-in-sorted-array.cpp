class Solution
{
public:
    int lowerbound_func(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int first_pos = nums.size();
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (nums[m] >= target)
            {
                first_pos = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        return first_pos;
    }
    int upperbound_func(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int last_pos = nums.size();
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (nums[m] > target)
            {
                last_pos = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        return last_pos;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first_pos = lowerbound_func(nums, target);
        int last_pos = upperbound_func(nums, target) - 1;
    
        if (first_pos <= last_pos)
            return {first_pos, last_pos};
        else
            return {-1, -1};
    }
};
