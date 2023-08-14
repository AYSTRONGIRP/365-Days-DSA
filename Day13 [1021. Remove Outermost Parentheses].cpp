class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        stack<char> st;
        int counter = 0;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                if (st.empty())
                {
                    // s = s.substr(0,counter) + s.substr(counter+1);

                    counter--;
                }
                else
                {
                    res = res + s[i];
                }
                st.push('(');
            }
            if (s[i] == ')')
            {
                st.pop();
                if (st.empty())
                {
                    // s = s.substr(0,counter) + s.substr(counter+1);
                    counter--;
                }
                else
                {
                    res = res + s[i];
                }
            }
            // cout<<res<<endl;
            counter++;
        }
        return res;
    }
};