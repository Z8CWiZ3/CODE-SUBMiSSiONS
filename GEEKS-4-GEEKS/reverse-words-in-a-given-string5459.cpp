class Solution
{
public:
    string reverseWords(string S)
    {
        string ans = "";
        string tmp = "";
        for (int i = S.size(); i >= 0; i--)
        {
            if (S[i] == '.')
            {
                reverse(tmp.begin(), tmp.end());
                ans = ans + tmp;
                ans.push_back('.');
                tmp = "";
            }
            else
                tmp.push_back(S[i]);
        }
        reverse(tmp.begin(), tmp.end());
        ans = ans + tmp;
        return ans;
    }
};
