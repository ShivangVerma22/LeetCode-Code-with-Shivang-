class Solution {
public:
    
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int maxval = 0;
        for (int i = 0; i < n; i++)
        maxval = max(maxval,heights[i]);
        vector<int> cntArr(maxval + 1, 0);
        for (int i = 0; i < n; i++)
        cntArr[heights[i]]++;

    
    for (int i = 1; i <= maxval; i++)
        cntArr[i] += cntArr[i - 1];

    
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[cntArr[heights[i]] - 1] = heights[i];
        cntArr[heights[i]]--;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ans[i]!=heights[i])
        {
            count++;
        }
    }
    return count;


        
    }
};