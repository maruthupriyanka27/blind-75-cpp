/*
Problem: Two Sum
Platform: LeetCode
Difficulty: Easy

Approach:
- Traverse the array once.
- Store previously seen values and their indices in an unordered_map.
- For each element, compute the required complement.
- If the complement exists in the map, return the two indices.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){

            int current = nums[i];
            int needed = target-current;

            auto it = mp.find(needed);

            if(it!=mp.end()){

                return {i,it->second};

            }

            mp[current]=i;

        }

        return {};
    }
};
