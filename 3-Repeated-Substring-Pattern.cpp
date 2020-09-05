class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        int n = str.size();    
        return (str + str).substr(1, 2*n -2).find(str) != -1;
    }
};