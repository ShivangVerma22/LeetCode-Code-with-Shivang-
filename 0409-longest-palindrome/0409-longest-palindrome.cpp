class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        int res=0;
        bool odd=false;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]++;
        }
        for(auto i: map)
        {
            int val=i.second;
            if(val%2==0)
            {
                res+=val;
            }
            else
            {
                odd=true;
            }
        }
        if(odd==false) return res;
        for(auto i :map)
        {
            int val=i.second;
            if(val%2==1)
            {
                res+=val-1;
            }
        }
        return res+1;

    }
};