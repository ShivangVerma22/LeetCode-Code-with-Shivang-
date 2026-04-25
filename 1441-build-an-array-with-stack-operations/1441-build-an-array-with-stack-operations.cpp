class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>str;
        int j=0;
        for(int i =1;i<=n;i++)
        {
            if(j==target.size()) break;
            str.push_back("Push");
            if(i==target[j])
            {
                j++;
            }
            else
            {
                str.push_back("Pop");
            }
            
        }
        return str;
    }
};