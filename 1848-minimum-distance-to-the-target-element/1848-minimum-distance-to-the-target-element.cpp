class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minimum=nums.size();
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                
                minimum=min(minimum,abs(i-start));
            }

        }
        return minimum;
    }
};

