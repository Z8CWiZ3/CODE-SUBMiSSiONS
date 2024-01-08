class Solution
{
public:
    int mySqrt(int x)
    {
        long long l = 1;
        long long r = x;
        while (l <= r)
        {
            long long m = (l + r) / 2;
            long long v = (m * m);
            if (v <= x)
                l = m + 1;
            else
                r = m - 1;
        }
        return r;
    }
};
