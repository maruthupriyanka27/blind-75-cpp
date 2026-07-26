/*
------------------------------------------------------------
Problem      : Missing Number
Platform     : LeetCode
Difficulty   : Easy
Topic        : Arrays, Hashing
Pattern      : Hash Set */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<=n;i++){
            auto it=st.find(i);
            if(it == st.end())
            {
                return i;

            }
        }
        return 0;

        }
/*------------------------------------/*
------------------------------------------------------------
Problem      : Missing Number
Platform     : LeetCode
Difficulty   : Easy
Topic        : Arrays, Mathematics
Pattern      : Sum Formula */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int num=nums.size();
        int esum=(num*(num+1))/2;
        int soln=esum-sum;
        return soln;
    }
    
};


        
    };
