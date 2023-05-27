class Solution {   //Recursive approach
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        else{
            return fib(n-1) + fib(n-2);  //This will again run the func. and repeat until it returns 1 .
        }
    }
};

