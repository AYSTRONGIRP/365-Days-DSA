class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        map<char, int> jewelMap;
        int output = 0;

        for (int i = 0; i < jewels.length(); i++)
        {
            jewelMap[jewels[i]] = 0;
        }

        for (int i = 0; i < stones.length(); i++)
        {
            if (jewelMap.find(stones[i]) != jewelMap.end())
                output++;
        }
        return output;
    }
};