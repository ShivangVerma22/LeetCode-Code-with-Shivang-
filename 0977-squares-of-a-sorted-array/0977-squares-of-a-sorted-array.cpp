class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int pro=nums[i]*nums[i];
            arr[i]=pro;
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};