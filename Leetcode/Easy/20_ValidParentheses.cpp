// 20. Valid Parentheses

// Topics : String, Stack.
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
//   Open brackets must be closed by the same type of brackets.
//   Open brackets must be closed in the correct order.
//   Every close bracket has a corresponding open bracket of the same type.

// Example 1:
//   Input: s = "()"
//   Output: true

// Example 2:
//   Input: s = "()[]{}"
//   Output: true

// Example 3:
//   Input: s = "(]"
//   Output: false

// Example 4:
//   Input: s = "([])"
//   Output: true

// Example 5:
//   Input: s = "([)]"
//   Output: false

// Constraints:
//   1 <= s.length <= 104
//   s consists of parentheses only '()[]{}'.

class Solution {
public:
    bool match(char a, char b){
        if((a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']')){
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else if(c == ')' || c == '}' || c == ']'){
                if(!st.empty()){
                    char ch = st.top();
                    if(match(ch, c)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)
