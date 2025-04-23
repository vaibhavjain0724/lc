class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int max = 0;
        int g_max = 0;  
        int k = 1;
        int l = 0;
        while(l < satisfaction.size()){
            for(int j= l; j < satisfaction.size(); j++){
                max+=satisfaction[j]*k;
                k++;
            }
            if(max > g_max){
                g_max = max;
            }
            max = 0;
            k = 1;
            l++;
        }
        return g_max;
        
    }
};