class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    //     vector<int> rs;
    //     int sum = 0;
    //     for(int i = 0; i <nums.size(); i ++){
    //         sum += nums[i];
    //         rs.push_back(sum);
    //     }
    //     return rs;
    // }
    for(int i = 1; i < nums.size(); i++){
        nums[i] = nums[i-1]+ nums[i];
    }
    return nums;
    }
};