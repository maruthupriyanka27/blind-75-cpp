// Longest Substring Without Repeating Characters: Use a sliding window and hash set to maintain unique characters.
// Time: O(n) | Space: O(k), where k is the character set size
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left = 0;
        int longest = 0;

        for(int right = 0; right < s.length(); right++)
        {
            while(st.find(s[right]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};
