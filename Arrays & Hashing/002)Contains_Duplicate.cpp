/*
------------------------------------------------------------
Problem      : Contains Duplicate
Platform     : LeetCode
Difficulty   : Easy
Topic        : Arrays, Hash Set
Pattern      : Duplicate Detection */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {

            auto it = st.find(nums[i]);

            if(it == st.end()) {
                st.insert(nums[i]);
            }
            else {
                return true;
            }
        }

        return false;
    }
};
