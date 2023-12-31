// TLE (Recursive Solution)

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n < 0)
            return 0;

        if (n == 0)
            return 1;

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};



// TLE (Recursive Solution)

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
            return 1;

        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};



// AC (Dynamic Programming)

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 0 || n == 1)
            return 1;

        vector<int> v_dp(n + 1);

        v_dp[0] = v_dp[1] = 1;

        for (int i = 2; i <= n; i++)
            v_dp[i] = v_dp[i - 1] + v_dp[i - 2];

        return v_dp[n];
    }
};
