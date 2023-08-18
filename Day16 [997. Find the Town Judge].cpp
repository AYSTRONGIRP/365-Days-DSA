class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        unordered_map<int, int> hashMap;

        if (n == 1)
            return 1;

        // cout<<trust.size();

        for (auto it : trust)
        {

            hashMap[it[1]]++;
        }
        for (auto it : trust)
        {
            if (hashMap.find(it[0]) != hashMap.end())
            {
                hashMap.erase(it[0]);
            }
        }
        int max = INT_MIN;
        int res = -1;
        for (auto it : hashMap)
        {
            // cout<<it.first;
            if (max < it.second)
            {
                max = it.second;
                res = it.first;
            }
        }

        if (max == n - 1)
            return res;
        else
            return -1;
    }
};