//
//  main.c
//  斐波那契数列
//
//  Created by 汪航 on 2021/11/2.
//

#include <stdio.h>
long fib(long n)
{
    if (n==1||n==2) {
        return n;
    }
    else {
        return fib(n-2)+fib(n-1);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("%ld",fib(4));
    return 0;
}
