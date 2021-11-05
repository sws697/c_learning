//
//  main.c
//  取地址运算
//
//  Created by 汪航 on 2021/11/3.
//

#include <stdio.h>
void f(int *p);
void g(int k);
int main()
{
    int i=7;
    int *t=&i;
    printf("%d\n",*t);//在定义时，*t表示的是变量i的指针，t表示的是i的地址；操作时*t被操作等同于i被操作｜｜翁凯老师说法：&i被传入*t从而在函数外i能够被访问与操作
    f(&i);
    printf("%d",i);
    
}
void f(int *p)
{
    *p=26;
}

