//
//  main.c
//  位数对调
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    int mask=0;
    int d=x;
    d/=10;
    mask=1;
    int count=1;
    while (d!=0) {
        d/=10;
        mask*=10;
        count++;
    }
    int contain2=0;
    if (count%2==0) {
        int c=x;
        int sign=1;
        contain2=c%10;
        if (contain2==0) {
            printf("The number cannot be changed.");
            sign=0;
        }
        if (sign==1){
        for (int j=1; j<=(count/2); j++) {
            contain2=c%10;
            printf("%d",contain2);
            c/=10;
        }
        int contain=0;
        int b=x;
        for (int i=1; i<=(count/2); i++) {
            b/=10;
        }
        for (int k=1; k<=(count/2); k++) {
            contain=b%10;
            printf("%d",contain);
            b/=10;
        }
        printf("\n");
        }

    }
    else
    {
        int c=x;
        int contain2=0;
        int sign=1;
        contain2=c%10;
        if (contain2==0){
            printf("The number cannot be changed.");
            sign=0;
        }
        if (sign==1){
        for (int j=1; j<=(count/2); j++) {
            contain2=c%10;
            printf("%d",contain2);
            c/=10;
        }
        int contain=0;
        int b=x;
        for (int i=1; i<=(count/2); i++) {
            b/=10;
        }
        for (int k=1; k<=(count/2)+1; k++) {
            contain=b%10;
            printf("%d",contain);
            b/=10;
        }
        printf("\n");

    }
    }

    return 0;
}
