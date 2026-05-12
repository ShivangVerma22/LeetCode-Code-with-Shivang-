class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!= word2.size()) return false;
        unordered_map<char,int>freq1,freq2;
        for(char c : word1)
        {
            freq1[c]++;
        }
        for(char q:word2)
        {
            freq2[q]++;
        }
        for(auto &p : freq1)
        {
            if(freq2.find(p.first)==freq2.end())
            {
                return false;
            }
        }
        for (auto& p : freq2)
        {
            if (freq1.find(p.first) == freq1.end())
            {
                return false;
            }
        }
        vector<int> vals1, vals2;
        for (auto& p : freq1)
        {
            vals1.push_back(p.second);
        }
        for (auto& p : freq2)
        {
            vals2.push_back(p.second);
        }
        
        sort(vals1.begin(), vals1.end());
        sort(vals2.begin(), vals2.end());
        
        return vals1 == vals2;
        
    }
};