#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int findShortestSubArray(std::vector<int>& nums) {
        std::unordered_map<int, int> count;
        std::unordered_map<int, int> first;
        std::unordered_map<int, int> last;
        
        int degree = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            if (first.find(x) == first.end()) {
                first[x] = i;
            }
            last[x] = i;
            count[x]++;
            degree = std::max(degree, count[x]);
        }
        
        int min_length = nums.size();
        for (const auto& [x, freq] : count) {
            if (freq == degree) {
                min_length = std::min(min_length, last[x] - first[x] + 1);
            }
        }
        
        return min_length;
    }
};