// Valid Anagram: Count the frequency of each character in both strings and compare their frequencies.
// Time: O(n) | Space: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int counts[26]={0};
        int countt[26]={0};
        for(char c:s){
            counts[c-'a']++;
        }
        for(char c:t){
            countt[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(counts[i] != countt[i]){
                return false;
            }
            
        }
        return true;

        
    }
};
