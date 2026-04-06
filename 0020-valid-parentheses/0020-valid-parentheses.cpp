class Solution {
public:
    bool isValid(string s) {
        stack<char>result;
        for(char &ch : s)
        {
            if(ch=='(')
            {
                result.push(')');
            }
            else if(ch== '{')
            {
                result.push('}');
            }
            else if(ch== '[')
            {
                result.push(']');
            }
            else if(result.empty() || result.top() != ch)
            {
                return false;
            }
            else
            {
                result.pop();
            }
        }
        return result.empty();
    }
};