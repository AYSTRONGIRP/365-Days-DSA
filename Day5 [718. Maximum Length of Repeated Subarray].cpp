class Solution
{
public:
    int findLength(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        int maxm = 0;
        int dp[n + 1][m + 1]; // for convinient indexing
        vector<vector<int>> vdp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (nums1[i - 1] == nums2[j - 1])
                {
                    vdp[i][j] = 1 + vdp[i - 1][j - 1];
                    maxm = max(maxm, vdp[i][j]);
                }
                else
                    vdp[i][j] = 0;
            }
        }

        return maxm;
    }
};