class Solution {
public:
    bool is_vowel(char ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
    bool doesAliceWin(string s) {
        for(auto x : s)
        {
            if(is_vowel(x))
            {
                return true;
            }
        }
        return false;
        
    }
};