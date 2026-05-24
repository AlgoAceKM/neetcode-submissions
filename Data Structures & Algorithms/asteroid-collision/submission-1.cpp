class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        s.push(asteroids[0]);

        for (int i = 1; i < asteroids.size(); i++) {

            if (s.empty() || asteroids[i] > 0 || s.top() < 0) {
                s.push(asteroids[i]);
            }
            else {
                int a = asteroids[i];
                bool destroyed = false;

                while (!s.empty() && s.top() > 0 && a < 0) {

                    int b = s.top();

                    if (abs(a) > abs(b)) {
                        s.pop();
                    }
                    else if (abs(a) == abs(b)) {
                        s.pop();
                        destroyed = true;
                        break;
                    }
                    else {
                        destroyed = true;
                        break;
                    }
                }

                if (!destroyed) {
                    s.push(a);
                }
            }
        }

        vector<int> ans;

        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};