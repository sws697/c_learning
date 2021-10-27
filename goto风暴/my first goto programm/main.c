//
//  main.c
//  my first goto programm
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>
#include <stdlib.h>
int main()
{
   int count=1;
   
   start: //标号,是跟有冒号的标识符
      if (count>10)
          goto end;
      printf("%d ",count);
      count=count+1;
      goto start;
   
   end:
      printf("\n");

    system("pause");
    return 0;
}
