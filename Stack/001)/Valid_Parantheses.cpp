// Valid Parentheses: Use a stack to track matching brackets by pushing the expected closing bracket when an opening one is encountered.
// Time: O(n) | Space: O(n), where n is the length of the string
#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        // Stack to store the expected closing brackets
        std::stack<char> brackets;
        
        for (char c : s) {
            // If it's an opening bracket, push its corresponding closing bracket
            if (c == '(') {
                brackets.push(')');
            } else if (c == '{') {
                brackets.push('}');
            } else if (c == '[') {
                brackets.push(']');
            } 
            // If it's a closing bracket, check if it matches the top of the stack
            else {
                if (brackets.empty() || brackets.top() != c) {
                    return false;
                }
                brackets.pop(); // Matched successfully
            }
        }
        
        // If the stack is empty, all brackets were matched correctly
        return brackets.empty();
    }
};
