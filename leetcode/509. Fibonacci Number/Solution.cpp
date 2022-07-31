#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;   
        if(n == 1) return 1;   

        int Fib[n+1];
        Fib[0] = 0;
        Fib[1] = 1;
        
        for(int i = 2; i < n + 1; i++){
            Fib[i] = Fib[i-1] + Fib[i-2];
        }
        return Fib[n];
    }
};