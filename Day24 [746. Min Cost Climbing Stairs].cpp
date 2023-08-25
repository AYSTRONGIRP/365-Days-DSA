class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> dp(cost.size() + 1, 0);

        for (int i = 1; i <= cost.size(); i++)
        {
            if (i - 2 < 1)
            {
                dp[i] = cost[i - 1];
                continue;
            }

            dp[i] = cost[i - 1] + min(dp[i - 1], dp[i - 2]);
        }

        for (auto it : dp)
            cout << it << endl;

        return min(dp[cost.size()], dp[cost.size() - 1]);
    }
};