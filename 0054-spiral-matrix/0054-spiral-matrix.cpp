class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>vec;
        int left=0;
        int top=0;
        int right=m-1;
        int bottom=n-1;
        while(left<=right && top<=bottom)
        {
            for(int i =left;i<=right;i++)
            {
                vec.push_back(matrix[top][i]);
            }
            top++;
            for(int k=top;k<=bottom;k++)
            {
                vec.push_back(matrix[k][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int j=right;j>=left;j--)
                {
                    vec.push_back(matrix[bottom][j]);
                }
            
            }
            bottom--;
            if(left<=right)
            {
                for(int p=bottom;p>=top;p--)
                {
                    vec.push_back(matrix[p][left]);
                }
            }
            left++;
        }
        return vec;
        
    }
};