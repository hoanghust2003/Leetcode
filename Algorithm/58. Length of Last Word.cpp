class Solution {
public:
    int lengthOfLastWord(string s) {
        // int i = s.size(), j;
        // while(s[--i] == ' ');
        // j = i;
        // while(i-- > 0 && s[i] != ' ');
        // return j - i;

        int i = s.size(), a = 0;
        while(i--){
            if(s[i] != ' ') ++a;
            else if(a) break;
        }
        return a;
    }
    
};
