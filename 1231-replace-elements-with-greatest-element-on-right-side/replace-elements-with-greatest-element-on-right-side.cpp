class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_so_far = -1;
        int current;
        for(int i = arr.size()-1;i>=0; i--)
        {
            current = arr[i];
            arr[i] = max_so_far;
            max_so_far = max(max_so_far, current);   
        }
        return arr;
    }
};