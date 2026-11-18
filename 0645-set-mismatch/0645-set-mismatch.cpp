class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int duplicate = 0;

        // Find duplicate
        for(int i = 0; i < n-1; i++) {
            if(nums[i] == nums[i+1]) {
                duplicate = nums[i];
                break;
            }
        }

        // Calculate actual sum
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }

        // Expected sum from 1 to n
        int sum2 = n * (n+1) / 2;

        // Find missing number
        int missing = sum2 - (sum - duplicate);

        return {duplicate, missing};
    }
};