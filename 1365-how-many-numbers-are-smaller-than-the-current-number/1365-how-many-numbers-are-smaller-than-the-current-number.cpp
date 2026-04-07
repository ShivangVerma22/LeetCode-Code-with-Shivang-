class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j && nums[i]>nums[j])
                {
                    count+=1;
                    
                }
            }
            res.push_back(count);
            
        }
        return res;

    }
};