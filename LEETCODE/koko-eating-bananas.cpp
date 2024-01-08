class Solution
{
public:
    int find_Max(vector<int> &piles)
    {
        int n = piles.size();
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
            if (piles[i] >= mx)
                mx = piles[i];
        return mx;
    }
    double total_Hours(vector<int> &piles, int per_Hour)
    {
        int n = piles.size();
        double sum = 0;
        for (int i = 0; i < n; i++)
            sum += ceil(piles[i] * 1.0 / per_Hour);
        return sum;
    }
    int minEatingSpeed(vector<int> &piles, int h)
    {
        int l = 1;
        int r = find_Max(piles);
        int ans = INT_MAX;
        while (l <= r)
        {
            int m = (l + r) / 2;
            double t_Hours = total_Hours(piles, m);
            if (t_Hours <= h)
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
