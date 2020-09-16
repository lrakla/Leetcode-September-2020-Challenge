class Solution {
public:
    int lengthOfLastWord(string s) {
        int result=0, n = s.length();
        while(n>0){
            if(s[--n] != ' ') result++;
            else if(result > 0) return result;
        }
        return result;
    }
};