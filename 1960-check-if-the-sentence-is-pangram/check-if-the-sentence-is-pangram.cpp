class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26)
        {
            return false;
        }

        for(char i = 'a'; i <= 'z'; i++)
        {
            if(sentence.find(i) == string::npos)
            {
                return false;
            }
        }

        return true;
    }
};