class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> st(candyType.begin(), candyType.end());

        int n = candyType.size();

        return min((int)st.size(), n/2);
    }
};