class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        long long odd = 0;
        long long even = 1;

        long long cnt = 0;
        int sum = 0;

        int mod = 1e9 + 7;

        for(int i = 0; i < arr.size(); i++) {

            sum += arr[i];

            if(sum % 2 == 0) {
                cnt = (cnt + odd) % mod;
                even++;
            }
            else {
                cnt = (cnt + even) % mod;
                odd++;
            }
        }

        return cnt;
    }
};