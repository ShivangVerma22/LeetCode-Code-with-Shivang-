class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int>mp;
       int n=arr.size();
       for(int i =0;i<n;i++)
       {
        mp[arr[i]]++;
       }
       set<int>s; 
       for(auto i : mp)
       {
        s.insert(i.second);
       }
       return mp.size()==s.size();
       
    }
};