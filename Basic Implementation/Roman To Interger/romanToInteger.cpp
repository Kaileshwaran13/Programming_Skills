class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'I' && s[i + 1] != 'V' && s[i+ 1] != 'X'){
                sum += 1;
            }else if(s[i] == 'V'){
                if(i >= 1 && s[i - 1] == 'I'){
                    sum += 4;
                }else{
                    sum += 5;
                }
            }else if(s[i] == 'X' && s[i + 1] != 'L' && s[i + 1] != 'C'){
                if(i >= 1 && s[i - 1] == 'I'){
                    sum += 9;
                }else{
                    sum += 10;
                }
            }else if(s[i] == 'L'){
                if( i >= 1 && s[i - 1] == 'X'){
                    sum += 40;
                }else{
                    sum += 50;
                }
            }else if(s[i] == 'C' && s[i + 1] != 'D' && s[i + 1] != 'M'){
                if( i >= 1 && s[i - 1] == 'X'){
                    sum += 90;
                }else{
                    sum += 100;
                }
            }else if(s[i] == 'D'){
                if( i >= 1 && s[i - 1] == 'C'){
                    sum += 400;
                }else{
                    sum += 500;
                }
            }else if(s[i] == 'M'){
                if( i >= 1 && s[i - 1] == 'C'){
                    sum += 900;
                }else{
                    sum += 1000;
                }
            }
        }
        return sum;
    }
};