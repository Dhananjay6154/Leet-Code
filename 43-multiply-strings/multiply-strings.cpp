class Solution {
public:
    string multiply(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        if(num1 == "0" || num2 == "0")
        return "0";
        
        int n = num1.size();
        int m = num2.size();

        vector<int> result(m+n+1,0); 

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                result[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
            }
        }
        reverse(result.begin(),result.end());
// Carry
        for(int i=n+m; i>=1;i--)
        {
            result[i-1] += result[i] / 10;
            result[i] %= 10;
        }
        int first = 0;
        while(first<=n+m && result[first] == 0)
        {
            first++;
        }
        string ans = "";
        for(int i=first;i<n+m;i++)
        {
            ans+=to_string(result[i]);
        }
        return ans;

    }
};