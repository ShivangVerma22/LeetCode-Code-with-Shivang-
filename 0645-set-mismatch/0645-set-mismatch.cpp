class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        long long finalsum=(long long)n*(n+1)/2;
        long long actualsum=0;
        int duplicate=-1;
        unordered_set<int>res;
        for(int num : nums)
        {
            actualsum+=num;
            if(res.count(num)) duplicate=num;
            res.insert(num);
        }
        int missing=finalsum -(actualsum - duplicate);
        return {duplicate,missing};
    }
};