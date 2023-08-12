class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> hashMap;
        unordered_map<char, int> vMap;
        string sr = "IVXLCDM";
        int v[] = {1, 5, 10, 50, 100, 500, 1000};
        int counter = 0;
        int n = s.size();

        for (char srs : sr)
        {
            hashMap.insert({srs, counter++});
        }

        for (int i = 0; i < sr.size(); i++)
        {
            vMap.insert({sr[i], v[i]});
        }

        int res = 0;

        for (int i = n - 1; i > -1; i--)
        {
            // cout<<hashMap.at(s[i]);

            if (i + 1 < n)
            {
                if (hashMap.at(s[i]) < hashMap.at(s[i + 1]))
                {
                    res -= (vMap.at(s[i]));

                    cout << hashMap.at(s[i + 1]) << " " << hashMap.at(s[i]) << endl;
                    cout << res << "f" << vMap.at(s[i]) << endl;
                }
                else
                    res += vMap.at(s[i]);
            }
            else
                res += vMap.at(s[i]);

            cout << res << endl;
        }
        return res;
    }
};