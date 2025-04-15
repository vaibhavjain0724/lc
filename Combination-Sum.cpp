class Solution {
public:
    int sum(vector<int> ans, int target){
        int sum = 0;
        for(int i = 0; i< ans.size(); i++){
            sum += ans[i];
        }
    
        return sum;
    }


    void cs(vector<vector<int>> &final_ans, vector<int> candidates, vector<int> ans,int target, int i ){
        if(sum(ans, target) == target){
            final_ans.push_back(ans);
            return;
        }
        if(i == candidates.size() || sum(ans, target) > target){
            return;
        }
        // ans.push_back(candidates[i]);
        // cs(final_ans, candidates, ans, target, i+1);
        // ans.pop_back();
        // cs(final_ans, candidates, ans, target, i+1);
        ans.push_back(candidates[i]);
        cs(final_ans, candidates, ans, target, i);
        ans.pop_back();
        cs(final_ans, candidates, ans, target, i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i = 0;
        vector<int> ans;
        vector<vector<int>> final_ans;
        cs(final_ans, candidates, ans, target, i);
        return final_ans;
        
    }
};