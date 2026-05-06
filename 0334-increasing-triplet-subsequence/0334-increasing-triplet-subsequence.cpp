class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
        {
            return false;
        }
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        for(int num : nums)
        {
            if(num<=mini1)
            {
                mini1=num;
            }
            else if(num<=mini2)
            {
                mini2=num;
            }
            else
            {
                return true;
            }
        }
        return false;
        
    }
};