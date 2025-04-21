class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //     int n = nums.size() - 1;
    //     int p = 1;
    //     vector<int> ans;

    //     for(int i = 0; i < n; i ++){
    //         p = p * nums[i]; 

    //     }
    //     for(int i = 0; i < n; i ++){
    //         ans.push_back(p/nums[i]);
    //     }
    //     return ans;
        
    // int n = nuns.size();
    // int
    int tp = 1;
    vector<int > zeroes;
    int j =0;
    for(int i: nums){
        if(i!= 0) {tp*= i;}
        else zeroes.push_back(j);
        j++;
    }
    vector<int> ans;
    if(zeroes.size() == 0){
        for(int i = 0; i < nums.size() ; i++){
            int temp = tp/nums[i];
            ans.push_back(temp);
        }
        return ans;
    }
    else if(zeroes.size() > 1){
        for(int i = 0; i < nums.size() ; i++){
            ans.push_back(0);
        }

        return ans;
    }
    else{
         for(int i = 0; i < nums.size() ; i++){
            if(i != zeroes[0]){
                ans.push_back(0);
            }
            
            else{
                int prod = 1;
                for(int i = 0; i < nums.size() ; i++){
                    if(i != zeroes[0]) prod*= nums[i];
                }
                ans.push_back(prod);
            }
        
        }
        return ans;
    }

    
    }
};
