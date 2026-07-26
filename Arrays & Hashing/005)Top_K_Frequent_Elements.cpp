/*
------------------------------------------------------------
Problem      : Top K Frequent Elements
Platform     : LeetCode
Difficulty   : Medium
Topic        : Arrays, Hash Map, Sorting
Pattern      : Frequency Counting + Custom Sorting */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second; // Compare the values
    });
    vector<int> ans;

for(int i = 0; i < k; i++)
{
    ans.push_back(vec[i].first);
}

return ans;
    }
};
