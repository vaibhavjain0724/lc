// int sub(int i,vector<int>&v, vector<int>&nums,int target){
//     int n = nums.size();
//     if(i==n){
//         if(!v.empty() && v[0] + v[v.size()-1] <= target){
//             return 1;
//         }
//         else{
//             return 0;
//         }
//     }
//     v.push_back(nums[i]);
//     int a = sub(i+1,v,nums,target);
//     v.pop_back();
//     int b = sub(i+1,v,nums,target);
//     a = a + b;
//     return a;

// }

// class Solution {
// public:
//     int numSubseq(vector<int>& nums, int target) {
//         int i = 0;
//         vector<int> v;
//         sort(nums.begin(),nums.end());
//         return sub(i,v,nums,target);
        
//     }
// };

class Solution{
    public:
        int numSubseq(vector<int>& nums, int target) {
            const int MOD = 1000000007;
            int n = nums.size()-1;
            int l = 0;
            int r = nums.size()-1;
            sort(nums.begin(),nums.end());
            int count = 0;
            vector<int>  p(n+1,1); 
            for(int i = 1; i <=n;i++){
                p[i] = (p[i-1]*2) % MOD;
            }
            while(r>=l){
                if(nums[r] + nums[l] > target){
                    r--;
                }
                else{
                    count = (count +  p[r-l])% MOD;
                    l++;
                }
            }
            return count;
    
        }
};

