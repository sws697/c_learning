//
//  main.c
//  最大公约数与最小公倍数
//
//  Created by 汪航 on 2021/11/6.
//mingongbei=m*n/maxgongyue
//两个数的乘积等于这两个数的最大公约数与最小公倍数的乘积。
//分析：假设两个数为 a和b,他们的最大公约数是a/c,
//那么他们的最小公倍数为 (a/c) * a/(a/c) * b/(a/c)。
//化简后得： b*c
//所以 最大公约数 乘以 最小公倍数 = (a/c) * (b*c) =a*b

#include <stdio.h>
int maxgongyue(int m,int n);
int mingongbei(int m,int n);
int main(int argc, const char * argv[]) {
    // insert code here...
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int c=maxgongyue(m, n);
    printf("%d ",c);
    printf("%d",m*n/c);
    return 0;
}
int maxgongyue(int m,int n)
{
    int sign=0;
    int i=0;
        for (i=m; i>=1&&sign==0; i--) {
            int yushu=0;
            yushu=m%i;
            if (yushu==0&&sign==0) {
                for (int j=n; j>=1&&sign==0; j--) {
                    int yushu2=0;
                    yushu2=n%j;
                    if (yushu2==0&&i==j) {
                        sign=1;
                    }
                }
            }
        }
    
    i+=1;
    return i;
}
int mingongbei(int m,int n){
    int sign2=0;
    int beishu1=0;
    for (int i2=1; i2<=n&&sign2==0; i2++) {
        beishu1=m*i2;
        for (int j2=1; j2<=m&&sign2==0; j2++) {
            int beishu2=0;
            beishu2=j2*n;
            if (beishu1==beishu2) {
                sign2=1;
            }
        }
    }
    return beishu1;
}
