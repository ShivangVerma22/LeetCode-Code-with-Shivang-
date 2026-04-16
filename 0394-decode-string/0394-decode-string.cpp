class Solution {
public:
    string decodeString(string s) {
        stack<string>ch;
        stack<int>na;
        for(int i =0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                int num=0;
                while(i<s.length() && isdigit(s[i]))
                {
                    num=num*10 +(s[i]-'0');
                    i++;
                }
                na.push(num);
                i--;
            }
            else if (s[i]==']')
            {
                string temp="";
                while(!ch.empty() && ch.top()!="[")
                {
                    temp=ch.top()+temp;
                    ch.pop();
                }
                ch.pop();
                int repeat=na.top();
                na.pop();
                string repeated="";
                while(repeat--)
                {
                    repeated+=temp;

                }
                ch.push(repeated);
            }
            else
            {
                ch.push(string(1,s[i]));
            }
        }
        string res="";
        while(!ch.empty())
        {
            res=ch.top()+res;
            ch.pop();
        }
        return res;
    }
};