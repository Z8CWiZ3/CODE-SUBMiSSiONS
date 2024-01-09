class Solution
{
public:
    bool is_possible(vector<int> &position, int m, int MD)
    {
        int cnt = 1;
        int last_ball = position[0];
        for (int i = 1; i < position.size(); i++)
        {
            if (position[i] - last_ball >= MD)
            {
                cnt++;
                last_ball = position[i];
            }
        }
        return cnt >= m;
    }
    int maxDistance(vector<int> &position, int m)
    {
        sort(position.begin(), position.end());
        int l = 1;
        int r = position.back() - position.front();
        int ans = position.size();
        while (l <= r)
        {
            int MD = (l + r) / 2;
            if (is_possible(position, m, MD))
            {
                ans = MD;
                l = MD + 1;
            }
            else
                r = MD - 1;
        }
        return ans;
    }
};
