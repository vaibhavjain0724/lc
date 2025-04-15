class Solution {
public:
    void gp(string ans, vector<string> &final_ans, int n, int i ,int j){
        if(i == n && j == n){
            final_ans.push_back(ans);
            return;
        }
        if(i < n || i == 0){
            gp(ans+ '(', final_ans, n , i+1 ,j);
        }
        if(j < i){
            gp(ans+ ')', final_ans, n , i ,j+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> final_ans;
        string ans = \\;
        int i =0 ; int j = 0;
        gp(ans, final_ans, n , i ,j);
        return final_ans;
    }
};