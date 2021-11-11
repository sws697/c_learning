//
//  main.c
//  设计函数isPerfect与printPerfect
//
//  Created by 汪航 on 2021/11/9.
//

#include <stdio.h>

int isPerfect(int n);

void printPerfact(int n);

int main()
{
    int i,a,b,count;

    scanf("%d %d",&a,&b);
    count = 0 ;//a,b两数间完全数的数量，初始化为0
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))  //如果是完全数
        {
            printPerfact(i);//打印该完全数
            count ++ ;  //计数器加1
        }
    }
    printf("The total number is %d.\n",count);//输出a,b两数间完全数的数量
    return 0 ;
}
/* 请在这里填写答案 */
int isPerfect(int n){
    int sum=0;
    int isPerfect=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            sum+=i;
        }
    }
    if (sum==n) {
        isPerfect=1;
    }
    return isPerfect;
}

void printPerfact(int n){
    
    int sum2=0;
    if (isPerfect(n)==1) {
        printf("%d=",n);
        for (int i=1; sum2<n; i++) {
            if (n%i==0) {
                printf("%d",i);
                sum2+=i;
                if (sum2<n) {
                    printf("+");
                }
                if (sum2==n) {
                    printf("\n");
                }
            }
        }
    }
    
}
