class Solution {
public:
    void DFS(int i , vector<vector<int>>& g , vector<bool>&visited)
    {
        visited[i]=true;
        for(int j=0;j<g.size();j++)
        {
            if(g[i][j]==1 && !visited[j])
            {
                DFS(j,g,visited);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n,false);
        int prov=0;
        for(int i =0;i<n;i++)
        {
            if(!visited[i] )
            {
                DFS(i,isConnected,visited);
                prov++;

            }
        }
        return prov;

    }
};