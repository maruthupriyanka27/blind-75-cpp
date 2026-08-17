// Valid Palindrome: Convert to lowercase, keep only alphanumeric characters, then compare using two pointers.
// Time: O(n) | Space: O(n)
class Solution {
public:
    bool isPalindrome(string s) {

        string arr;

        for(char c : s)
        {
            if(isalnum(c))
            {
                arr.push_back(tolower(c));
            }
        }

        int left = 0;
        int right = arr.length() - 1;

        while(left < right)
        {
            if(arr[left] != arr[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
