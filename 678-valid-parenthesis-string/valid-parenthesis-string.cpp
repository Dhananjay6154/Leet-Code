class Solution {
public:
    bool checkValidString(string s) {
        stack<int> s1; // for the brackets
        stack<int> s2; // For the *

        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];
            if(ch == '(')
            {
                s1.push(i);
            }
            else if(ch == '*')
            {
                s2.push(i);
            }
            else{
                // Closing
                if(!s1.empty())
                {
                    s1.pop();
                }
                else if(!s2.empty())  // Aestrick is not empty   // * is treated as (
                {
                    s2.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!s1.empty())
        {
        
            if(s2.empty())
            {
                return false;
            }
            int open = s1.top();
            int close = s2.top();

            s1.pop();
            s2.pop();

            if(open > close)
            {
                return false;
            }
        }
        return true;
    }
};