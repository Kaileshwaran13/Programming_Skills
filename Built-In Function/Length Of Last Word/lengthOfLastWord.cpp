class Solution {
public:
    int lengthOfLastWord(string s) {
        int num = s.size(), count = 0;
        bool word = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] != ' '){
                count++;
            }
            if(count != 0 && s[i] == ' '){
                break;
            }
        }
        return count;
    }
};