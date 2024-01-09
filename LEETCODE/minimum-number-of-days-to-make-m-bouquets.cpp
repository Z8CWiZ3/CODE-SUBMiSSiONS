class Solution
{
public:
    bool is_possible(vector<int> &bloomDay, int m, int k, int MD)
    {
        int cnt_bloom = 0;
        int cnt_bouqt = 0;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            if (bloomDay[i] <= MD)
                cnt_bloom++;
            else
            {
                cnt_bouqt += (cnt_bloom / k);
                cnt_bloom = 0;
            }
        }
        cnt_bouqt += (cnt_bloom / k);
        return cnt_bouqt >= m;
    }
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        long long v = m * 1LL * k;
        if (v > bloomDay.size())
            return -1;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < bloomDay.size(); i++)
        {
            mn = min(mn, bloomDay[i]);
            mx = max(mx, bloomDay[i]);
        }
        int l = mn;
        int r = mx;
        int ans = bloomDay.size();
        while (l <= r)
        {
            int MD = (l + r) / 2;
            if (is_possible(bloomDay, m, k, MD))
            {
                ans = MD;
                r = MD - 1;
            }
            else
                l = MD + 1;
        }
        return ans;
    }
};
