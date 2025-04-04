int a(int i, vector<int>& memo){
    if(i == 0 || i == 1 || i == 2) return i;
    if(memo[i] != -1) return memo[i];
    memo[i] = a(i -1, memo) + a(i -2, memo);
    return memo[i];
}


class Solution {
public:
    int climbStairs(int n) {
        int i = n;
        vector<int> memo (n+1,-1);
        return a(i, memo);

    }
};