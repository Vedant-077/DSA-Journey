class Solution {
public:
    int mySqrt(int x) {
        for(int i = 1; i <= x; i++) {
            
            long long square = 1LL * i * i;

            if(square == x) {
                return i;
            }

            if(square > x) {
                return i - 1;
            }
        }

        return 0;
    }
};
