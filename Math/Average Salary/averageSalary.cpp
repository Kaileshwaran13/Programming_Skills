class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double ans = 0;
        double size = salary.size();
        for(int i = 1;i < size - 1; i++){
            ans += salary[i];
        }
        size -= 2;
        return ans / size;
    }
};