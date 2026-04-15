class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefixsum(nums.size());
        int sum=nums[0];
        prefixsum[0]=0;
        for(int i =1;i<nums.size();i++)
        {
            sum+=nums[i];
            prefixsum[i]=prefixsum[i-1]+nums[i-1];
        }
        for(int i =0;i<nums.size();i++)
        {
            if(prefixsum[i] == (sum-prefixsum[i]-nums[i]))
            {
                return i;
            }
        }
        return -1;
    }
};