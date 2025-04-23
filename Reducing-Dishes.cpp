class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        // int max = 0;
        // int g_max = 0;  
        // int k = 1;
        // int l = 0;
        // while(l < satisfaction.size()){
        //     for(int j= l; j < satisfaction.size(); j++){
        //         max+=satisfaction[j]*k;
        //         k++;
        //     }
        //     if(max > g_max){
        //         g_max = max;
        //     }
        //     max = 0;
        //     k = 1;
        //     l++;
        // }
        // return g_max;

        //! optimised
        vector<int> suffix_sum(satisfaction.size(),0);
        int suffix = 0;
        for(int i = satisfaction.size()-1; i >= 0; i--){
            suffix+= satisfaction[i];
            suffix_sum[i] =suffix;
        }
        int index=  0;
        int t = 0;
        for(int  i =0; i < suffix_sum.size(); i++){
            if(suffix_sum[i] > 0){
                index = i;
                t = 1;
                break;
            }
        }
        int sum = 0;
        int k  =1;
        if(t!= 0){
        for(int i = index; i < suffix_sum.size(); i++){
            sum+= satisfaction[i] * k;
            k++;
        }
        }
        return sum;
    }
};