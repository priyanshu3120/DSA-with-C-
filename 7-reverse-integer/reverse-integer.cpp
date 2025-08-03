class Solution {
public:
    int reverse(int x) {
        int revNum=0;
        while(x != 0)
        {
            int digit= x % 10;
            //for checking the valur of revNum is not going to outside range of int
            if(revNum > INT_MAX/10 || revNum <INT_MIN/10)
                return 0;

            revNum=revNum * 10 +digit;
            x = x / 10;
        }
        return revNum;
    }
};