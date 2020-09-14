class Solution {
public:
    // only contains digits 
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        vector<int> sVec(10, 0), gVec(10, 0); // 0 ~ 9 for guess/secret
        if (secret.size() != guess.size() || secret.empty()) { return "0A0B"; }
        for (int i = 0; i < secret.size(); ++i) {
            char c1 = secret[i]; char c2 = guess[i];
            if (c1 == c2) {
                ++bulls; 
            } else {
                ++sVec[c1-'0'];
                ++gVec[c2-'0'];
            }
        }
        // count b 
        for (int i = 0; i < sVec.size(); ++i) {
            cows += min(sVec[i], gVec[i]);
        }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';

    }
};