//
//  main.c
//  二进制转十进制
//
//  Created by 汪航 on 2021/11/6.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    int a=x;
    int b=x;
    int mask=1;
    int count=1;
    while (a>9) {
        a/=10;
        mask*=10;
        count++;
    }
    int sum=0;
    for (int i=0; i<count; i++) {
        int contain=b%10;
        b/=10;
        if (contain==1) {
            int x2=1;
            for (int j=0; j<i; j++) {
                x2*=2;
            }
            sum+=x2;
        }
    }
    printf("%d",sum);
    return 0;
}
