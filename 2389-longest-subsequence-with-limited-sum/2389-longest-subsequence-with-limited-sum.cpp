class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {

        int n = nums.size();
        int m = queries.size();

        vector<int> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < m; i++) {
            int sum = 0;
            int len = 0;

            for(int j = 0; j < n; j++) {
                sum += nums[j];

                if(sum <= queries[i])
                    len++;
                else
                    break;
            }

            ans.push_back(len);
        }

        return ans;
    }
};