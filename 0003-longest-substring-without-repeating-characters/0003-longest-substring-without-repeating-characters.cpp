class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length()==0 || s.length()==1)
            return s.length();

        int left=0,right=0;
        vector<bool> vis(128,false);
        int res=0;

        while(right < s.length()){

            while(vis[s[right]] == true){
                vis[s[left]] = false;
                left++;
            }

            vis[s[right]] = true;
            res = max(res,right-left+1);

            right++;
        }

        return res;
    }
};