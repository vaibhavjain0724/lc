void reverse(vector<char> &s, int st,int e){

    if(st>=e){
        return;
    }
    swap(s[st],s[e]);
    reverse(s, st+1,e-1);
}


class Solution {
public:
    void reverseString(vector<char>& s) {
        // int n = s.size();
        // int st = 0;
        // int e = n - 1;

        // while(st<e){
            
        //     swap(s[st],s[e]);
        //     st++;
        //     e--;
        // }
        int st = 0;
        int e = s.size()-1;

        reverse(s,st,e);

    }
};