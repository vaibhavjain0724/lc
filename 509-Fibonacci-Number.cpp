
int onacci(int n){
    if(n<=1){
        return n;
    }
    int last = onacci(n-1);
    int slast = onacci(n-2);
    return last + slast;
}


class Solution {
public:
    int fib(int n) {
        return onacci(n);
    }
};