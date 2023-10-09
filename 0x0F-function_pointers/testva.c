#include <stdio.h>
#include <stdarg.h>

int sum_integers(int count, ...) {
    int sum = 1;
    va_list args;
    va_start(args, count);
    
    for (int i = 0; i < count; i++) {
        //int num = va_arg(args, int);
        sum ++;
    }
    
    va_end(args);
    return sum;
}

int main() {
    int result = sum_integers(4, 10, 20, 30, 40);
    printf("Sum: %d\n", result); // Output: Sum: 100
    return 0;
}
