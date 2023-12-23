class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        sort(a.begin(), a.end());
        int i = 0;
        int j = m - 1;
        int minDiff = INT_MAX;
        while (j < a.size())
        {
            int x = a[j] - a[i];
            minDiff = min(minDiff, x);
            i++;
            j++;
        }
        return minDiff;
    }
};
