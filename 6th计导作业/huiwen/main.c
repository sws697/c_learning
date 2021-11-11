//
//  main.c
//  huiwen
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
    a=x;
    int sign=1;
    for (int i=0; i<count/2&&sign==1; i++) {
        int contain=0;
        int contain2=0;
        contain=a/mask;
        a%=mask;
        mask/=10;
        contain2=b%10;
        b/=10;
        if (contain!=contain2) {
            sign=0;
        }
    }
    if (sign==1) {
        printf("Yes");
    }
    else printf("No");
    return 0;
}
