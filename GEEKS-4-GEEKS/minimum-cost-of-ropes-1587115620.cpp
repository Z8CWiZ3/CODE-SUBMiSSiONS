class Solution
{
public:
    long long minCost(long long arr[], long long n)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++)
            pq.push(arr[i]);
        long long cost = 0;
        while (pq.size() > 1)
        {
            long long f = pq.top();
            pq.pop();
            long long s = pq.top();
            pq.pop();
            long long t = f + s;
            cost = cost + t;
            pq.push(t);
        }
        return cost;
    }
};
