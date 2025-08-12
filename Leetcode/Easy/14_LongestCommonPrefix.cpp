// 14. Longest Common Prefix

// Topics : Array, String, Trie
// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

// Example 1:
//   Input: strs = ["flower","flow","flight"]
//   Output: "fl"

// Example 2:
//   Input: strs = ["dog","racecar","car"]
//   Output: ""
//   Explanation: There is no common prefix among the input strings.
 
// Constraints:
//   1 <= strs.length <= 200
//   0 <= strs[i].length <= 200
//   strs[i] consists of only lowercase English letters if it is non-empty.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // Check Size
        if(strs.size() == 0) return "";
        
        string ans = strs[0];
        for(int i = 1; i < strs.size(); i++){
            
            // Empty String
            if(strs[i] == "" || strs[i-1] == ""){
                return "";
            }

            // Compare
            int j = 0;
            while(j < ans.length() && j < strs[i].length()){
                if(ans[j] != strs[i][j]){
                    break;
                }
                j++;
            }
            ans = ans.substr(0, j);     // Cut the prefix
        }
        return ans;
    }
};

// Time Complexity : O(n x m)
// Space Complexity : O(m)
// where : n -> number of strings
// m -> length of shortest string
