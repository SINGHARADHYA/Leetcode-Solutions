class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            int nge=-1;
            for(int k=1;k<nums.size();k++){
                int j = (i + k) % n;

                if(nums[j] > nums[i]) {
                    nge = nums[j];
                    break;
                }
            }
            ans.push_back(nge);
        }
        return ans;

    }
};