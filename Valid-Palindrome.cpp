class Solution {
public:
    bool isPalindrome(string s) {

        // s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        // return !std::isalnum(c);}), s.end()); // removes spaces and non-alphanumeric characters


        // std::transform(s.begin(),s.end(),s.begin(), ::tolower);

        // int st = 0;
        // int e = s.size()-1;

        // for(int i  = 0; i < s.size();i++){
        //     if(s[st]!=s[e]){
        //         return false;
        //     }
        //     st++;
        //     e--;
        // }
        // return true;


        // std::string str = s;
        // std::string new_str;

        // for(int i  =0; i < str.length(); i++){
        //     if(('a' <= str[i]  && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') || (std::isdigit(str[i]))){
        //         new_str += str[i];
        //     }
        // }

        // std::transform(new_str.begin(),new_str.end(),new_str.begin(), ::tolower);


        // int start = 0;
        // int end = new_str.length() -1;

        // while(start<end){
        //     if(new_str[start] != new_str[end]){
        //         return false;
        //     }
        //     start++;
        //     end--;
        // }
        // return true;
        string new_string;

        transform(s.begin(),s.end(),s.begin(),::tolower);
        int n = s.length();
        for(int i =0 ; i < n ; i ++){
            if(('a' <= s[i] && 'z'>= s[i])|| ('A' <= s[i] && 'Z'>= s[i]) || isdigit(s[i])){
                new_string += s[i];
            }
        }
        int st = 0;
        int e = new_string.length()- 1;
        while(st <= e){
            if(new_string[st] != new_string[e]){
                return false;
            }
            st++;
            e--;
        }
        return true;


    }
};