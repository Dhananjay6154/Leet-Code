class Solution {
public:
    bool checkString(string s) {
        bool flag = true;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'b')
            {
                flag = false;
            }
            else if(s[i] == 'a' && flag == false)
            {
                return false;
            }
        }
        return true;
        
    }
};