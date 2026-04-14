class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int result=0;
        int i=0;
        int j=-1;
        int count=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                i++;
            }
            else
            {
                count++;
                i++;
           }

           while(count > 1 && j < i)
           {
            j++;
            if(nums[j]==0)
            {
                count--;
            }
           }
           int sow=i-j-1;
           result=max(sow,result);
        }
        return result - 1;
    }
};