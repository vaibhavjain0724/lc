
class Solution {
public:

        
void combinations(string ans, vector<string> &final_ans, int n,int i,vector<string>chars ){
    if(i == n){
        if(!ans.empty()) final_ans.push_back(ans);
        return;
    }
    for(int j = 0; j < chars[i].size(); j++){
        char c = chars[i][j];
        combinations(ans+c, final_ans, n ,i +1, chars);
    }
}

void fn(string digits, string string1, vector<string> &chars){
    if(digits == \\) return;
    char ch = digits[0];
    if(ch == '9') string1= \wxyz\;
    if(ch == '2') string1= \abc\;
    if(ch == '3') string1= \def\;
    if(ch == '4') string1= \ghi\;
    if(ch == '5') string1= \jkl\;
    if(ch == '6') string1= \mno\;
    if(ch == '7') string1= \pqrs\;
    if(ch == '8') string1= \tuv\;
    chars.push_back(string1);
    fn(digits.substr(1), string1,chars);

}



    vector<string> letterCombinations(string digits) {
        vector<string> final_ans;
        string ans;
        string og = \\;
        vector<string> chars;
        fn(digits,og, chars);
        int n = chars.size();
        combinations( ans, final_ans, n,0, chars);
        return final_ans;

    }
};