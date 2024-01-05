class Solution {
public:
    int fib(int n) {
        
        int a = 0;
        int b = 1;
        int c;
        if(n==0 || n==1) return n;

        while(n >= 2) {
            c = a+b;
            a = b;
            b = c;
            n--;
        }
        return c;
    }
};