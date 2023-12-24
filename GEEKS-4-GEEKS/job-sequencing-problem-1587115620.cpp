class Solution
{
public:
    static bool cmp(Job x, Job y)
    {
        return x.profit > y.profit;
    }
    vector<int> JobScheduling(Job arr[], int n)
    {
        sort(arr, arr + n, cmp);
        int maxDeadLine = INT_MIN;
        for (int i = 0; i < n; i++)
            maxDeadLine = max(maxDeadLine, arr[i].dead);
        vector<int> schedule(maxDeadLine + 1, -1);
        int cnt = 0;
        int maxProfit = 0;
        for (int i = 0; i < n; i++)
        {
            int currID = arr[i].id;
            int currDeadLine = arr[i].dead;
            int currProfit = arr[i].profit;
            for (int j = currDeadLine; j > 0; j--)
            {
                if (schedule[j] == -1)
                {
                    cnt++;
                    maxProfit += currProfit;
                    schedule[j] = currID;
                    break;
                }
            }
        }
        vector<int> ans;
        ans.push_back(cnt);
        ans.push_back(maxProfit);
        return ans;
    }
};
