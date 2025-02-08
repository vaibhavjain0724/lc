class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int max_pr = 0;
        // int slow = 0;
        // int fast = 1;
        // int current_profit = 0;

        // while(fast < prices.size()){
        //     if(prices[fast] - prices[slow] > 0){
        //         max_pr += prices[fast] - prices[slow]; 
        //     }
        //     slow++;
        //     fast++;
        // }
        // return max_pr;










        int sl = 0;
        int max = 0;
        int fa = 1;
        
        while(fa < prices.size()){
            if(prices[sl] < prices[fa]){
                max += prices[fa] - prices[sl];
                
            }
            fa++;
            sl++;
        }
        return max;
    }
};