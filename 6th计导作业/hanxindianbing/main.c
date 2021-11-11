//
//  main.c
//  hanxindianbing
//
//  Created by 汪航 on 2021/11/6.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    scanf("%d",&n);
    int m=n;
    while (m%5!=1||m%6!=5||m%7!=6||m%11!=10) {
        m++;
    }
    printf("%d",m);
    return 0;
}
