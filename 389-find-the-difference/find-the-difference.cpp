class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(auto c : s)
        {
            ans ^= c;
        }
        for(auto x : t)
        {
            ans ^= x;
        }
        return ans;
    }
};