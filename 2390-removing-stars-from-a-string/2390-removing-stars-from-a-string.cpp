class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for(int i =0;i<s.length();i++)
        {
            if(s[i]!='*')
            {
                stk.push(s[i]);
            }
            else
            {
                stk.pop();
            }
        }
        string s1="";
        while(!stk.empty())
        {
            s1+=stk.top();
            stk.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};