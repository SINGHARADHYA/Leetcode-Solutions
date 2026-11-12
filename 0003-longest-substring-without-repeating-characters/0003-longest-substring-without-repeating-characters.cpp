// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//     //     int ans=0;
//     //     for(int i=0;i<s.size();i++){
//     //         bool arr[256]={false};
//     //         for(int j=i;j<s.size();j++){
//     //             if(arr[s[j]]==true)
//     //             break;
//     //             arr[s[j]]=true;
//     //             ans=max(ans,j-i+1);
//     //         }
//     //     }
//     //     return ans;

//     // }


//     unordered_set<char> st;
//     int left=0;
//     int maxi=0;
//     for(int right =0;right<s.size();right++){
//         while(st.find(s[right]) != st.end());
//         st.erase(s[left]);
//         left++;
//     }
//     st.insert(s[right]);
//     maxi=max(maxi,right-left+1);
//     }
//     return maxi;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;

        int left = 0;
        int maxi = 0;

        for (int right = 0; right < s.size(); right++) {

            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};
