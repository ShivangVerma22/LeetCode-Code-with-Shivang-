class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        string ans="";
        for(int i =0;i<s.length();i++)
        {
        
           if( !stk.empty() && stk.top()==s[i])
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