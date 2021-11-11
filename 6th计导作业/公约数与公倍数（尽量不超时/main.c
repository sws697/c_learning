//
//  main.c
//  公约数与公倍数（尽量不超时
//
//  Created by 汪航 on 2021/11/6.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    int max=0,min=0;
    max=m>=n ? m :n;
    min=m<n ? m : n;
    int maxgongyue=1,mingongbei=0;
    if (max%min==0) {
        maxgongyue=min;
        mingongbei=max;
    }
    else{
        int i=1;
        while (i<=min) {
            if (max%i==0&&min%i==0) {
                max/=i;
                min/=i;
                maxgongyue*=i;
            }//优越性就在这里，通过对余数的判断减少循环次数
            i++;
        }
        mingongbei=max*min*maxgongyue;//这里最好用乘法
    }
    printf("%d %d",maxgongyue,mingongbei);
    return 0;
}
