class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string res = "";
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            bool check = true;

            for (int j = 0; j < res.size(); j++)
            {
                if (s[i] == res[j])
                {
                    check = false;
                    break;
                }
            }

            if (check)
            {
                res += s[i];
            }
            else
            {
                int pos = res.find(s[i]);
                res = res.substr(pos + 1);
                res += s[i];
            }

            ans = max(ans, (int)res.size());
        }

        return ans;
    }
};