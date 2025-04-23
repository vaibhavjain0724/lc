class Solution {
public:
    int bestClosingTime(string customers) {
        // vector<int> v1;
        // int count = 0;
        // for(int i = 0 ; i < customers.length(); i++){
        //     if(customers[i] == 'Y'){
        //         v1.push_back(count+ 1);
        //         count++;

        //     }
        //     else{
        //         v1.push_back(count - 1);
        //         count--;

        //     }
        // }
        // int max = 0;
        // int max_num = 0;
        // for(int i =0 ; i < v1.size(); i++){
        //     if(v1[i] > max_num){
        //         max = i;
        //         max_num = v1[i];
        //     }
        // }
        // if(max == 0 && customers[0] == 'N') return max;
        // else return max + 1;


        int a = 0; int b = 1;
        int max = 0; int max_ind = 0;
        int f_max = 0; int f_max_ind = 0;
        int count = 0;
        int i =  0;

        while(i < customers.length()){
            if(customers[i] == 'Y'){
                count++;
            }
            else{
                count--;
            }
            if(count > max){
                max_ind = i;
                max = count;
            }
            if(max > f_max){
                f_max = max;
                f_max_ind = i; 
            }
            i++;
        }
        if(f_max_ind == 0 && customers[0] == 'N') return f_max_ind;
        else return f_max_ind + 1;
    }
};