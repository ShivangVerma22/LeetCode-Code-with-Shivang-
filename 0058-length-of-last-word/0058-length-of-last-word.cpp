class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n=s.length()-1;
        int count=0;
        bool counting=false;
       
        for(int i=n;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
                counting=true;
            }
            else if(counting)
            {
                break;
            }
        }
        return count;
        
    }
};