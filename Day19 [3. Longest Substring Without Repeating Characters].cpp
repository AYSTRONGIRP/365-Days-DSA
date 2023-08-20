class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {

        unordered_map<char, pair<int, int>> hashMap;
        int counter = 0;
        int maxi = 0;
        int temp = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (hashMap.find(s[i]) != hashMap.end())
            {
                temp = hashMap[s[i]].first;
            }
            hashMap[s[i]] = {i, 1 + hashMap[s[i]].second};
            // cout<<hashMap[s[i]].second;
            if (hashMap[s[i]].second == 2)
            {
                // hashMap.clear();
                i = temp;
                cout << i;
                hashMap.clear();
                counter = 0;
            }
            else
                counter++;

            maxi = max(maxi, counter);
        }
        return maxi;
    }
};