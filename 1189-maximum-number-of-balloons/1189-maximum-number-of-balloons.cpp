class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        int res=INT_MAX;
        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;
        for(int i =0;i<text.length();i++)
        {
            have[text[i]]++;
        }
        for(auto i:need)
        {
            char c=i.first;
            int val1=i.second;
            int val2=have[c];
            int p=val2/val1;
            res=min(res,p);

        }
        return res;
    }
};