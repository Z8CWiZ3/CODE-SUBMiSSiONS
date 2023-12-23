class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies, candies + N);
        int minCost = 0;
        int buy = 0;
        int free = N - 1;
        while (buy <= free)
        {
            minCost = minCost + candies[buy];
            buy++;
            free = free - K;
        }
        int maxCost = 0;
        buy = N - 1;
        free = 0;
        while (free <= buy)
        {
            maxCost = maxCost + candies[buy];
            buy--;
            free = free + K;
        }
        vector<int> ans;
        ans.push_back(minCost);
        ans.push_back(maxCost);
        return ans;
    }
};
