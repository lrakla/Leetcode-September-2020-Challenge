class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int i=0,n = pattern.size();
        stringstream  stream(str);
        unordered_map<string,int> s2i; //string to int
        unordered_map<char,int> c2i; //char to int
        
        for(string word; stream>>word; ++i){
            if(i==n || s2i[word] != c2i[pattern[i]])
                return false;
            s2i[word] = c2i[pattern[i]] = i+1;
        }
        return i==n;
        
    }
};