class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
    
        int right = n - 1;
        while (colors[right] == colors[0]) {
            right--;
        }
        int maxDist = right; 
        int left = 0;
        while (colors[left] == colors[n - 1]) {
            left++;
        }
        maxDist = max(maxDist, n - 1 - left);
        
        return maxDist;
    }
};