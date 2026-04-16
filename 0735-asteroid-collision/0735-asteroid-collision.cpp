class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> num;

        for(int i = 0; i < asteroids.size(); i++)
        {
            if(asteroids[i] > 0)
            {
                st.push(asteroids[i]);
            }
            else if(asteroids[i] < 0)
            {
                if(st.empty() || st.top() < 0)
                {
                    st.push(asteroids[i]);
                }
    
                else if(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
                {
                    while(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
                    {
                        st.pop();
                    }
                    
                    if(st.empty() || st.top() < 0)
                        st.push(asteroids[i]);
                    else if(st.top() == abs(asteroids[i]))
                        st.pop();
                    
                }
                
                else if(st.top() == abs(asteroids[i]))
                {
                    st.pop();
                }
                
            }
        }

        while(!st.empty())
        {
            num.push_back(st.top());
            st.pop();
        }

        
        reverse(num.begin(), num.end());

        return num;
    }
};