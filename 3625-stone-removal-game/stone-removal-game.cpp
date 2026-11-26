class Solution {
public:
    bool canAliceWin(int n) {
        int check = 10;
        bool aliceTurn = true;
        while(n >= check)
        {
            n -= check;
            check--;
            aliceTurn = !aliceTurn;
        }
        return !aliceTurn;

        
    }
};