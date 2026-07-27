/*
Problem: Longest Consecutive Sequence

Approach:
1. Store all unique elements in an unordered_set for O(1) lookup.
2. Iterate over the HashSet (not the original array) to avoid duplicate processing.
3. A number is the start of a sequence only if (num - 1) is not present.
4. From each starting number, keep checking (current + 1) and count the sequence length.
5. Update the maximum sequence length.

Time Complexity: O(n)
Space Complexity: O(n)

Pattern: HashSet + Sequence Detection
*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st)
        {
            if (!st.count(num - 1))
            {
                int current = num;
                int count = 1;

                while (st.count(current + 1))
                {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
