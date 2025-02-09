class Solution {
public:
    bool isSubsequence(string s, string t) {
        // if(s.length() == 0){
        //     return true;
        // }
        // int slow = 0;
        // int fast = 0;
        // while(slow < s.length() && fast < t.length()){
        //     if(slow == s.length()-1){
        //        if(s[slow] == t[fast]){
        //         return true;
        //        }
        //         else{
        //             fast++;
        //         }
        //     } 
        //     else{
                
        //         if(s[slow] == t[fast]){
        //             slow++;
        //             fast++;
        //         }
        //         else if(s[slow] != t[fast]){
        //             fast++;
        //         }

        //     }
            
        // }
        // return false;










        int a= 0;
        int b = 0;
        if(s.size() == 0){
            return true;
        }

        while(a< s.size()&& b < t.size()){
            if(a<s.size()-1){
                if(s[a] == t[b]){
                    a++;
                    b++;
                }
                else{
                    b++;
                }
            }
            else{
                if(s[a] == t[b]){
                    return true;
                }
                else{
                    b++;
                }

            }
            
        }
        return false;

    }
};