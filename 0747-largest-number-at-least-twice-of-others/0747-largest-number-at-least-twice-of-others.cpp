class Solution {
public:
    int dominantIndex(vector<int>& nums) {

        int largest = 0;

        // largest ka index
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[largest])
                largest = i;
        }

        int second = -1;

        // second largest
        for(int i = 0; i < nums.size(); i++) {
            if(i != largest) {
                if(second == -1 || nums[i] > nums[second])
                    second = i;
            }
        }

        // check
        if(nums[largest] >= 2 * nums[second])
            return largest;

        return -1;
    }
};