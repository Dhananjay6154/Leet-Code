class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;

        for(auto x:s)
        {

            if(st.find(x) != st.end())
            {
                return x;
            }
            else{
                st.insert(x);
            }
        }
        return ' ';
    }
};