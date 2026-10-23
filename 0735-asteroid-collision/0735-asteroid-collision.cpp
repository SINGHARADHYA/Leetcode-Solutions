
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int a : asteroids) {
            while (!st.empty() && a < 0 && st.top() > 0) {
                if (st.top() < -a) {
                    st.pop();
                }
                else if (st.top() == -a) {
                    st.pop();
                    a = 0;
                    break;
                }
                else {
                    a = 0;
                    break;
                }
            }

            if (a != 0) {
                st.push(a);
            }
        }

        vector<int> ans;

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
