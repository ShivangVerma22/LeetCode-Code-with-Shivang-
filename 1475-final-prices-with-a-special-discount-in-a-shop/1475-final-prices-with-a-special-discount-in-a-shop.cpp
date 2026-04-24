class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int>stk;
        int n=prices.size();
        vector<int>ans(n);
        
        for(int i=n-1;i>=0;i--)
        {
            
            while(!stk.empty() && stk.top()>prices[i])
            {
                stk.pop();
                
                
            }
            
            if(!stk.empty())
            {
                ans[i] = prices[i] - stk.top();
            }
            else
            {
                ans[i] = prices[i]; 
            }
            stk.push(prices[i]);

        }
        return ans;
    }
};