
class Solution
{
public:
    string longestCommonPrefix(vector<string> &v)
    {
        string ans = "";
        sort(v.begin(), v.end());
        for (auto it : v)
            cout << v[0] << endl;
        int n = v.size();
        string first = v[0];
        for (int i = 0; i < first.size(); i++)
        {
            bool flag = true;
            for (auto it : v)
            {
                if (first[i] != it[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans += first[i];
                continue;
            }
            break;
        }

        return ans;
    }
};