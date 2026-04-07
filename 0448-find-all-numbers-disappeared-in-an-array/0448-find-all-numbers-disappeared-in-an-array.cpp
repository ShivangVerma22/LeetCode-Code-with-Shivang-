class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> jam;
        for (int i =1;i<n+1;i++){
            jam.insert(i);
        }
        for ( int i : nums){
            if(jam.count(i)) jam.erase(i);
        }
        vector<int> v(jam.begin(), jam.end());
        return v;
    }
};