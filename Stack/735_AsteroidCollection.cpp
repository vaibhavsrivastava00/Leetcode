class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s; 
        vector<int> ans;

        for (int i = 0; i < asteroids.size(); i++) {
            if (asteroids[i] > 0) {
                s.push(asteroids[i]); 
            } else {
                int ch = -asteroids[i];
                while (!s.empty() && s.top() > 0 && s.top() < ch) {
                    s.pop(); 
                }
                if (!s.empty() && s.top() > 0 && s.top() == ch) {
                    s.pop(); 
                } else if (s.empty() || s.top() < 0) {
                    s.push(asteroids[i]); 
                }
            }
        }

        while (!s.empty()) {
            ans.insert(ans.begin(), s.top()); 
            s.pop();
        }

        return ans;
    }
};
