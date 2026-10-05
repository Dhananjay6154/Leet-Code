class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> ans;
        int score = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                ans.push_back(score);
                score = 0;
            }
            else{
                if(s[i-1] == '(') //()
                {
                    score = ans.back() + 1;
                }
                else{
                   score = ans.back() + (2*score);
                }
                ans.pop_back();
            }


        }
        return score;
    }
};