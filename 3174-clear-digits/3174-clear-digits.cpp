class Solution {
public:
    string clearDigits(string s) {
        stack<char>stk;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);

            }

        }
        while(!stk.empty())
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};