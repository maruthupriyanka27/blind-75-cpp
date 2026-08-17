// Combination Sum: Use backtracking to explore possible combinations and reuse the same element when needed.
// Time: O(2^target) approximately | Space: O(target) recursion depth excluding output
class Solution {
public:

    void solve(int index, int target, vector<int>& current,
               vector<int>& candidates, vector<vector<int>>& ans)
    {
        if(target == 0)
        {
            ans.push_back(current);
            return;
        }

        if(target < 0)
        {
            return;
        }

        for(int i = index; i < candidates.size(); i++)
        {
            current.push_back(candidates[i]);

            solve(i, target - candidates[i], current, candidates, ans);

            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> current;

        solve(0, target, current, candidates, ans);

        return ans;
    }
};
