class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i]=abs(nums[i]);
        sort(nums.begin(),nums.end());
        int n= nums.size();
       long long ans=0;
       int mid=0;
        mid=nums.size()/2;
       for(int i=0;i<nums.size();i++){
        if(i<mid) ans-=nums[i]*nums[i];
        else ans+=nums[i]*nums[i];
       }
       return ans;
    }
};