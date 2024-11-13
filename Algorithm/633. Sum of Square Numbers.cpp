class Solution {
public:
    bool judgeSquareSum(int c) {
        unsigned int x = sqrt(c);
        if (x*x == c) return true;
        for(unsigned int i = 1; i <= x; i++){
            unsigned int jj = c - i*i;
            unsigned int j = sqrt(jj);
            if(j*j == jj) return true;
        }
        return false;
    }
};