//
//  main.c
//  指针与数组
//
//  Created by 汪航 on 2021/11/4.
//

#include <stdio.h>
void f(int a[]);
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[]={1,2,3,4,5,6,7,8,9,};
    f(a);
    printf("%d",a[0]);
    return 0;
}
void f(int a[])
{
    a[0]=1000;
}
