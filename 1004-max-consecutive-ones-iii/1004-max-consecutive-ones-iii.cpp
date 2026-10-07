class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int zeros = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Add current element to window
            if (nums[right] == 0) {
                zeros++;
            }

            // Shrink window if zeros exceed k
            while (zeros > k) {

                if (nums[left] == 0) {
                    zeros--;
                }

                left++;
            }

            // Current window is valid
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
