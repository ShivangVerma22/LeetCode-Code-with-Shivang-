class Solution {
public:
    bool ismade(unordered_map<char,int>&map1,unordered_map<char,int>&map2)
    {
        for(auto c:map1)
        {
            char i=c.first;
            int j=c.second;
            if(map2[i]<j)
            {
                return false;
            }
        }
        return true;
    }
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        for(int i =0;i<ransomNote.length();i++)
        {
            map1[ransomNote[i]]++;
        }
        for(int i =0;i<magazine.length();i++)
        {
            map2[magazine[i]]++;
        }

        return ismade(map1,map2);
    }
};