class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        map<int, int> hash;
        int output = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]]++;
        }

        map<int, int>::iterator it;
        for (it = hash.begin(); it != hash.end(); it++)
        {
            if (it->second > 1)
                output += it->second * (it->second - 1) / 2;
        }
        return output;
    }
};