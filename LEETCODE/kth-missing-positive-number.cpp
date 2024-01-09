class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int l = 0;
        int r = arr.size() - 1;
        int ans = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            int miss_num = arr[m] - (m + 1);
            if (k > miss_num)
            {
                ans = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }
        return ans + k + 1;
    }
};
