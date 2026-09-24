// Minimum Window Substring: Use a sliding window and a frequency map to shrink the window from the left once all target characters are matched.
// Time: O(m + n) | Space: O(k), where m and n are string lengths, and k is the constant character set size (128)
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128, 0);
        for (char c : t) {
            map[c]++;
        }
        
        int counter = t.length();
        int begin = 0, end = 0;
        int d = INT_MAX;
        int head = 0;
        
        while (end < s.length()) {
            if (map[s[end]] > 0) {
                counter--;
            }
            map[s[end]]--;
            end++;
            
            while (counter == 0) {
                if (end - begin < d) {
                    d = end - begin;
                    head = begin;
                }
                if (map[s[begin]] == 0) {
                    counter++;
                }
                map[s[begin]]++;
                begin++;
            }
        }
        
        return d == INT_MAX ? "" : s.substr(head, d);
    }
};
