class Solution {
public:
    int sum(vector<int> v){
        int n = v.size();
        int sum =0;
        for(int i = 0; i < n ; i++){
            sum+= v[i];
        }
        return sum;
    }
    // bool check_uniq(vector<vector<int>> v2, vector<int> v){
    //     int n = v2.size();
    //     for(int i = 0; i < n ; i++){
    //         if(v2[i] == v){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    void cs(vector<int> v, vector<int> ans, vector<vector<int>> &final_ans, int i, int n , int target){
        if(sum(ans) == target){
            // if(check_uniq(final_ans,ans)){
            final_ans.push_back(ans);
            return;
            // }
            // else{
            //     return;
            // }
        }
        else if(sum(ans) > target ||i == n){
            return;
        }
        ans.push_back(v[i]);
        cs(v,ans,final_ans,i+1, n, target);
        ans.pop_back();
        int j = i +1;
        while(j < n && v[j] == v[i]) j++;
        cs(v,ans,final_ans,j, n, target);
        

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> ans;
        vector<vector<int>> final_ans;
        sort(candidates.begin(), candidates.end());
        cs(candidates,ans,final_ans,0, n, target);
        return final_ans;
    }
};