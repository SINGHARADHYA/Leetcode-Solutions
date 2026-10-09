class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<string> ans;

        int freq[26] = {0};

        for(int i = 0; i < words[0].size(); i++) {
            freq[words[0][i] - 'a']++;
        }

        for(int i = 1; i < words.size(); i++) {

            int temp[26] = {0};

            for(int j = 0; j < words[i].size(); j++) {
                temp[words[i][j] - 'a']++;
            }

            for(int j = 0; j < 26; j++) {
                freq[j] = min(freq[j], temp[j]);
            }
        }

        for(int i = 0; i < 26; i++) {

            while(freq[i] > 0) {
                ans.push_back(string(1, 'a' + i));
                freq[i]--;
            }
        }

        return ans;
    }
};