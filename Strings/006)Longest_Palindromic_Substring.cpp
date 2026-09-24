// Longest Palindromic Substring: Expand outwards from each index acting as the center for both odd and even-length palindromes.
// Time: O(n²) | Space: O(1)
class Solution {
public:
    string longestPalindrome(string s) {

        int start = 0;
        int longest = 0;

        for(int i = 0; i < s.length(); i++)
        {
            // Odd-length palindrome
            int left = i;
            int right = i;

            while(left >= 0 && right < s.length() && s[left] == s[right])
            {
                if(right - left + 1 > longest)
                {
                    longest = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }

            // Even-length palindrome
            left = i;
            right = i + 1;

            while(left >= 0 && right < s.length() && s[left] == s[right])
            {
                if(right - left + 1 > longest)
                {
                    longest = right - left + 1;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, longest);
    }
};
