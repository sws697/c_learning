//
//  main.c
//  数字拆分
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>

int main() {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    int d=x;
    int mask=0;
    d=d/10;
    mask=1;
    while (d!=0) {
        d=d/10;
        mask*=10;
    }
    int contain=0;
     if (mask==1) {
        printf("%d",x);
    }
    if (mask>1) {
        contain=x/mask;
        printf("%d ",contain);
        x=x%mask;
        mask=mask/10;
        while (mask!=1) {
            contain=x/mask;
            printf("%d ",contain);
            x=x%mask;
            mask/=10;
        }
        printf("%d",x);
    }
    printf("\n");
    
    return 0;
}
