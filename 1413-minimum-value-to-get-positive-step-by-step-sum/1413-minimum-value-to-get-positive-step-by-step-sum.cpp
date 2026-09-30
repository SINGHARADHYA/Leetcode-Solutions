class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int minisum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            minisum=min(minisum,sum);
        }
        return 1 - minisum;
    }
};