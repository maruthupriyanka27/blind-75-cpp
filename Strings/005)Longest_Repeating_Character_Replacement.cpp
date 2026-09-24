// Longest Repeating Character Replacement: Use a sliding window and a frequency array to track the maximum character frequency within the current window.
// Time: O(n) | Space: O(1), as the frequency array size is fixed at 26
class Solution {
public:
    int characterReplacement(string s, int k) {

        int count[26] = {0};

        int left = 0;
        int longest = 0;
        int maxFreq = 0;

        for(int right = 0; right < s.length(); right++)
        {
            count[s[right] - 'A']++;

            maxFreq = max(maxFreq, count[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k)
            {
                count[s[left] - 'A']--;
                left++;
            }

            longest = max(longest, right - left + 1);
        }

        return longest;
    }
};
