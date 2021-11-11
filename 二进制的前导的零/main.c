//
//  main.c
//  二进制的前导的零
//
//  Created by 汪航 on 2021/11/8.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;;
    int count=0;
    scanf("%d",&n);
    if (n<0) {
        count=32;
    }
    else
    {
        while (n>0) {
            n/=2;
            count++;
        }
    }
    count=32-count;
    printf("%d",count);
    return 0;
}
