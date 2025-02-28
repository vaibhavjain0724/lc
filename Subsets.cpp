vector<vector<int>> sub(vector<int> v,int i,vector<int> nums){
    int n = nums.size();
    vector<vector<int>> ans;
    if(i == n){
        return {v};
    }
    v.push_back(nums[i]);
    vector<vector<int>> a = sub(v,i+1,nums);
    v.pop_back();
    vector<vector<int>> b = sub(v,i+1,nums);
    a.insert(a.begin(),b.begin(),b.end());
    return a;
}


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
        int i = 0;
        vector<vector<int>> ans = sub(v,i,nums);

        return ans;
        
    }
};