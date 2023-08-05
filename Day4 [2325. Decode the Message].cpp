#include <iostream>
#include <string>
#include <map>
class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        unordered_map<char, char> keya;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        int counter = 0;

        for (auto k : key)
        {
            if (k != ' ')
                if (!keya[k])
                    keya[k] = alphabet[counter++];
        }
        for (int i = 0; i < message.length(); i++)
        {
            if (message[i] == ' ')
            {
                ans += ' ';
            }
            else
            {
                ans += keya[message[i]];
            }
        }

        return ans;
    }
};