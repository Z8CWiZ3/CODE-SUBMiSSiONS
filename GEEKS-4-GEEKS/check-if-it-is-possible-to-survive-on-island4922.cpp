class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        int X = S * M;
        int Y = S - (S / 7);
        int ans = ceil(X * 1.0 / N);
        if (ans > Y)
            return -1;
        else
            return ans;
    }
};
