#include <stdio.h>
int fib(int n) {
    
    if (n <= 0) {
        return -1;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int prev1 = 1, prev2 = 1, current = 0;
        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
    
        return current;
    }
}
int main(){
 int a = fib(10);
 printf("esta na posicao: %d",a); /*10 foi usado como exemplo*/
}
