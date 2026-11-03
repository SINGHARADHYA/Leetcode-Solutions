class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n-1;i++){
            cnt += (nums[n - 1] - nums[i]);
        }
        return cnt;
    }
};