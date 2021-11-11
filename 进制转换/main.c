//
//  main.c
//  进制转换
//
//  Created by 汪航 on 2021/11/9.
//

#include <stdio.h>
void transfer(int num,int base){
    int result1=1;
    int i=1;
    for (i=1; num>=result1; i++) {
        result1=result1*base;
    }
    i=i-1;
    result1/=base;
    int f1=0;
    f1=num/result1;
    printf("%d ",f1);
    num=num%result1;
    result1/=base;
    while (result1>=1) {
        f1=num/result1;
        printf("%d ",f1);
        num=num%result1;
        result1/=base;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int num=0;
    int base=0;
    scanf("%d %d",&num,&base);
    transfer(num, base);
    return 0;
}
